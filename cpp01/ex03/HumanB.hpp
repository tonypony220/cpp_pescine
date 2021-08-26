#include "Weapon.hpp"

#ifndef __HUMAN_B_H__
# define __HUMAN_B_H__

class HumanB {
  private:
	Weapon gun;
	std::string name;
	HumanB();	

  public:
	HumanB( std::string name );	
	void setWeapon( Weapon & gun );	
	~HumanB( void ) {};	
	void attack();

};

#endif
