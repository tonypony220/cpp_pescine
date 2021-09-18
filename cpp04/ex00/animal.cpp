#include "Animal.hpp"

Animal::Animal( ) {}

Animal::Animal( const Animal & copy ) { *this = copy; }

const Animal & Animal::operator=( const Animal & other ) {
	type = other.type;
	return *this;	
}

Animal::~Animal( void ) {}

void Animal::makeSound( void ) { std::cout << "" << std::endl; }

