#include "animal.hpp"

/* right class */

Animal::Animal( void ) {}

Animal::Animal( const Animal & copy ) { *this = copy; }

const Animal & Animal::operator=( const Animal & other ) {
	std::cout << "Animal assing called" << std::endl;
	type = other.type;
	return *this;	
}

Animal::~Animal( void ) {}
void Animal::makeSound( void ) const { std::cout << "abstract sound" << std::endl; }
void Dog::makeSound( void )  const{ std::cout << "woof" << std::endl; }
void Cat::makeSound( void ) const { std::cout << "meeow" << std::endl; }

std::string Animal::getType( void ) const {
	return type;
}

Dog::Dog( void ) : Animal() {
	std::cout << "Dog cunstructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Cat::Cat( void ) : Animal() {
	std::cout << "Cat cunstructor called" << std::endl;
	type ="Cat";
	brain = new Brain();
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

const Dog & Dog::operator=( const Dog & copy ) {
	std::cout << "Dog assing called" << std::endl;
	size_t s = sizeof( copy.brain->ideas ) / sizeof( copy.brain->ideas[0] );
	brain = new Brain();
	for	( size_t i = 0; i < s; i++ ) {
		brain->ideas[i] = copy.brain->ideas[i];
	}
	return *this;	
}

Dog::Dog( const Dog & copy ) { *this = copy; }
Brain * Dog::get_brain( void ) { return brain; }

const Cat & Cat::operator=( const Cat & copy ) {
	std::cout << "Cat assing called" << std::endl;
	size_t s = sizeof( copy.brain->ideas ) / sizeof( copy.brain->ideas[0] );
	brain = new Brain();
	for	( size_t i = 0; i < s; i++ ) {
		/* std::cout << i << " "; //std::endl; */
		brain->ideas[i] = copy.brain->ideas[i];
	}
	return *this;	
}

Cat::Cat( const Cat & copy ) { *this = copy; }
Brain * Cat::get_brain( void ) { return brain; }

