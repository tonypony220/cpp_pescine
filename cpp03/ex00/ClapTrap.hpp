#include <iostream>
#ifndef CLASS_CLAP_TRAP
# define CLASS_CLAP_TRAP
# define quote(x) #x

class ClapTrap {

  private:
	std::string 	_name;
	unsigned int 	_hitpoints;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

  public:

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap( std::string name );	

	ClapTrap();	

	ClapTrap( const ClapTrap & copy );	

	~ClapTrap( void );	

	const ClapTrap & operator=( const ClapTrap & other ) ;	
};

std::ostream & operator<<( std::ostream & o, const Fixed & other );	

union ieee754_float {
	float f;
	struct my_float {
		/* unsigned int negative:1; */
		/* unsigned int exponent:8; */
		/* unsigned int mantissa:23; */
		unsigned int mantissa:23;
		unsigned int exponent:8;
		unsigned int negative:1;
	} ieee ;
};

#endif
