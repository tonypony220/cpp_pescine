#include <iostream>

#ifndef __WEAPON_H__
# define __WEAPON_H__

class Weapon {
  private:
	std::string type;

  public:
	Weapon( std::string gun ) { type = gun; };	
	Weapon() {};	
	~Weapon( void );	
	const std::string & getType();
	void setType( std::string name );
};

#endif
