#include <iostream>
#ifndef CLASS_CLAP_TRAP
# define CLASS_CLAP_TRAP

class ClapTrap {

  protected:
	std::string 	_name;
	unsigned int 	_hitpoints;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
	ClapTrap();	

  public:
	void attack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	ClapTrap( std::string name, 
			  unsigned int hit = 10, 
			  unsigned int eng = 10,
			  unsigned int dmg = 0
	);

	ClapTrap( const ClapTrap & copy );	

	~ClapTrap( void );	

	const ClapTrap & operator=( const ClapTrap & other ) ;	
};

#endif
