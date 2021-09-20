#include <iostream>
#include "ichar.hpp"

#ifndef CLASS_MATERIA
# define CLASS_MATERIA

class AMateria {
	protected:
		std::string type;
	public:
		AMateria( void );
		AMateria( std::string const & type );
		std::string getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter & target );
		virtual ~AMateria( void ) {}	
		const AMateria & operator=( const AMateria & other );	
		AMateria( const AMateria & copy );	
};

class Ice : public AMateria {
	public:
		virtual Ice* clone() const ;
		virtual void use( ICharacter & target );
		virtual ~Ice( void ) {}	
};

/* class Cure : public AMateria { */
/* 	public: */
/* 		virtual Cure* clone(); */
/* 		virtual void use( ICharacter & target ); */
/* 		virtual ~Cure( void ); */	
/* }; */

#endif
