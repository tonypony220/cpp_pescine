#include "animal.hpp"

/* right class */

Animal::Animal( void ) {}

Animal::Animal( const Animal & copy ) { *this = copy; }

const Animal & Animal::operator=( const Animal & other ) {
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

Dog::Dog( void ) : Animal() {type = "Dog";};
Cat::Cat( void ) : Animal() {type ="Cat";};

/* wrong class */

WrongAnimal::WrongAnimal( void ) {}

WrongAnimal::WrongAnimal( const WrongAnimal & copy ) { *this = copy; }

const WrongAnimal & WrongAnimal::operator=( const WrongAnimal & other ) {
	type = other.type;
	return *this;	
}

WrongAnimal::~WrongAnimal( void ) {}
void WrongAnimal::makeSound( void ) const { std::cout << "abstract sound" << std::endl; }
void WrongDog::makeSound( void )  const{ std::cout << "woof" << std::endl; }
void WrongCat::makeSound( void ) const { std::cout << "meeow" << std::endl; }

std::string WrongAnimal::getType( void ) const {
	return type;
}

WrongDog::WrongDog( void ) : WrongAnimal() {type = "Dog";};
WrongCat::WrongCat( void ) : WrongAnimal() {type ="Cat";};
