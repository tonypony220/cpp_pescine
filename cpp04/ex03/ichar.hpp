#include <iostream>
#ifndef CLASS_CHARACTER
# define CLASS_CHARACTER

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter & target) = 0;
};

class Character : public ICharacter
{
	protected:
		std::string name;
		AMateria * inventory[4];
	public:
		/* Character( void ); */
		Character( std::string n = "" );
		const Character & operator=( const Character & other );	
		Character( const Character & copy );	
		virtual ~Character() {}
		virtual std::string const & getName() const { return name; }
		virtual void equip( AMateria * m ); 
		virtual void unequip( int idx );
		virtual void use(int idx, ICharacter & target);

		void inv(std::string m) { 
			for (int i = 0; i < 4 ; i++) {
				std::cout << m << " INVENTORY : " << i << " " << inventory[i] << std::endl;
			}
		}
};


#endif
