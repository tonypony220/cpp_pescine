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
		virtual ~AMateria( void );
		const AMateria & operator=( const AMateria & other );	
		AMateria( const AMateria & copy );	
};

class Ice : public AMateria {
	public:
		/* std::string getType() const { return Ice::type; }; */
		Ice( void );
		virtual Ice* clone() const ;
		virtual void use( ICharacter & target );
		virtual ~Ice( void );	
};

class Cure : public AMateria {
	public:
		Cure( void );
		virtual Cure* clone() const ;
		virtual void use( ICharacter & target );
		virtual ~Cure( void );	
};


class IMateriaSource
{
	public:
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	private:
		AMateria * inventory[4];
	public:
		MateriaSource( void );
		virtual ~MateriaSource();
		virtual void learnMateria( AMateria* m );
		virtual AMateria* createMateria(std::string const & type);

		const MateriaSource & operator=( const MateriaSource & other );	
		MateriaSource( const MateriaSource & copy );	
};

#endif
