#include <iostream>
#include "AMateria.hpp"
#pragma once 

//class Ice : public AMateria {
//	public:
//		/* std::string getType() const { return Ice::type; }; */
//		Ice( void );
//		virtual Ice* clone() const ;
//		virtual void use( ICharacter & target );
//		virtual ~Ice( void );	
//};

class Ice : public AMateria {
	public:
		/* std::string getType() const { return Ice::type; }; */
		Ice( void ) : AMateria("ice") {} 
		virtual ~Ice( void ) {}	

		virtual void use( ICharacter & target ) {
			std::cout << "* heals " << target.getName()<<  " wounds *" << std::endl;
		}

		virtual Ice* clone() const {
			return new Ice( *this );	
		}
};

/* Ice::Ice( void ) { */
/* 	type = "ice"; */
/* } */
/* Ice::~Ice( void ) {} */

/* Ice * Ice::clone() const { */
/* 	return new Ice( *this ); */	
/* } */

/* void Ice::use( ICharacter & target ) { */
/* 	std::cout << "* heals " << target.getName()<<  " wounds *" << std::endl; */
/* } */
