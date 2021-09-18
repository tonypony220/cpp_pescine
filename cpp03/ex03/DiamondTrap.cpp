#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name,
						  unsigned int hit, 
						  unsigned int eng,
						  unsigned int dmg 
					  ) : ClapTrap( name + "_clap_name" ), FlagTrap( name ), ScavTrap( name + "000000" , hit , eng, dmg), _name( name )
{	
	std::cout << "DiamondTrap: Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {	
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "name: " << _name << " claptrap name: " << ClapTrap::_name << std::endl;
}
