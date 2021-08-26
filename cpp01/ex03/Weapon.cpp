#include "Weapon.hpp"

Weapon::~Weapon( void ) {}	

const std::string & Weapon::getType() { 
	/* std::cout << type << std::endl; */
	return type;
}

void Weapon::setType( std::string name ) {
	type = name;		
}
