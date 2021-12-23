#include <iostream>

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	protected:
		std::string name;
		AMateria * inventory[4];
	public:
		Character( std::string n = "" );
		const Character & operator=( const Character & other );	
		Character( const Character & copy );	
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip( AMateria * m ); 
		virtual void unequip( int idx );
		virtual void use(int idx, ICharacter & target);

		void inv(std::string m) ;
};
