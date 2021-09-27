#include "materia.hpp"
#include <locale>  // std::locale, std::toupper

AMateria::AMateria( void ) {
	std::locale loc;
	type = std::string(__func__);
	for (int i=0; i < static_cast<int>(type.length()); ++i)
		type[i] = std::tolower(type[i], loc);
	/* std::cout << "type:: " << type << std::endl; */
}

std::string AMateria::getType( void ) const {
	return type;
}


AMateria::~AMateria( void )	{}

AMateria::AMateria( std::string const & type ) {
	this->type = type;
}

void AMateria::use( ICharacter & target ) {
	std::cout << "* ??? wtf " << target.getName() << std::endl;
}

const AMateria & AMateria::operator=( const AMateria & other ) {
	/* std::cout << "AMateria assing called" << std::endl; */
	type = other.type;
	return *this;	
}

AMateria::AMateria( const AMateria & copy ) {
	*this = copy; 
}

/* materia derivates */ 

Ice::Ice( void ) {
	type = "ice";
}

Ice::~Ice( void ) {}

Ice* Ice::clone() const {
	return new Ice( *this );	
}

void Ice::use( ICharacter & target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *"<< std::endl;
}

Cure::Cure( void ) {
	type = "cure";
}
Cure::~Cure( void ) {}

Cure * Cure::clone() const {
	return new Cure( *this );	
}

void Cure::use( ICharacter & target ) {
	std::cout << "* heals " << target.getName()<<  " wounds *" << std::endl;
}

/* meteria src */

IMateriaSource::~IMateriaSource() {}

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4 ; i++ )
			inventory[i] = 0;
}

void MateriaSource::learnMateria( AMateria * m ) {
	for (int i = 0; i < 4 ; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4 ; i++) {
		if (inventory[i] && inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}


MateriaSource::~MateriaSource() { 
	for (int i = 0; i < 4 ; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
}

