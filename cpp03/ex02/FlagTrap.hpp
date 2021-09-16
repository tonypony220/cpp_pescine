#include <iostream>
#include "ClapTrap.hpp"
#ifndef CLASS_FLAG_TRAP
# define CLASS_FLAG_TRAP


class FlagTrap : public ClapTrap {

	public: 
	  FlagTrap( std::string name, 
				unsigned int hit = 100, 
	  		  	unsigned int eng = 100,
	  		  	unsigned int dmg = 30
	  );

	  ~FlagTrap( void );	

	  void highFivesGuys(void);
};

#endif
