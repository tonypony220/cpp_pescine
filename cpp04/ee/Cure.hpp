#include <iostream>
#include "AMateria.hpp"
#pragma once 

//class Cure : public AMateria {
//	public:
//		/* std::string getType() const { return Cure::type; }; */
//		Cure( void );
//		virtual Cure* clone() const ;
//		virtual void use( ICharacter & target );
//		virtual ~Cure( void );	
//};

class Cure : public AMateria {
	public:
		/* std::string getType() const { return Cure::type; }; */
		Cure( void ) : AMateria("cure") {} 
		virtual ~Cure( void ) {}	

		virtual void use( ICharacter & target ) {
			std::cout << "* heals " << target.getName()<<  " wounds *" << std::endl;
		}

		virtual Cure* clone() const {
			return new Cure( *this );	
		}
};

/* Cure::Cure( void ) { */
/* 	type = "cure"; */
/* } */
/* Cure::~Cure( void ) {} */

/* Cure * Cure::clone() const { */
/* 	return new Cure( *this ); */	
/* } */

/* void Cure::use( ICharacter & target ) { */
/* 	std::cout << "* heals " << target.getName()<<  " wounds *" << std::endl; */
/* } */
