#include "ScavTrap.hpp"

void ScavTrap::attack( std::string const & target ) {
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_hitpoints += _attack_damage;
}

void ScavTrap::guardGate( void ) { 
	std::cout << "ScavTrap: ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap( std::string name,
					unsigned int hit, 
					unsigned int eng,
					unsigned int dmg 
				  ) : ClapTrap( name, hit, eng, dmg )
{	
	std::cout << "ScavTrap: Constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {	
	std::cout << "ScavTrap: Destructor called" << std::endl;
}
