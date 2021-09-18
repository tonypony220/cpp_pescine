#include "FlagTrap.hpp"

void FlagTrap::highFivesGuys(void) { 
	for ( size_t i = 0; i < 5; i++ ) {
		std::cout << "FlagTrap: High five!!!" << std::endl;
	};
}

FlagTrap::FlagTrap( std::string name,
					unsigned int hit, 
					unsigned int eng,
					unsigned int dmg 
				  ) : ClapTrap( name, hit, eng, dmg )
{	
	std::cout << "FlagTrap: Constructor called" << std::endl;
}

FlagTrap::~FlagTrap( void ) {	
	std::cout << "FlagTrap: Destructor called" << std::endl;
}
