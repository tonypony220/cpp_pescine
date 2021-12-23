#include <iostream>
#include "ICharacter.hpp"
#pragma once

class AMateria {
	protected:
		std::string type;
	public:
		AMateria( void );
		AMateria( std::string const & type );
		virtual ~AMateria( void );
		AMateria( const AMateria & copy );
		const AMateria & operator=( const AMateria & other );

		std::string 	  getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void 	  use( ICharacter & target );
};
