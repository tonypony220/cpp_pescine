#include "AMateria.hpp"

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
