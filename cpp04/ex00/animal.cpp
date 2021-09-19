#include "animal.hpp"

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
