
#ifndef __HUMAN_A_H__
# define __HUMAN_A_H__

# include "Weapon.hpp"

class HumanA {
  private:
	std::string name;
	HumanA();	
	Weapon & gun;

  public:
	HumanA( std::string name, Weapon & gun );	
	void setWeapon( Weapon & gun );	
	~HumanA( void ) {};	
	void attack();
};

#endif
