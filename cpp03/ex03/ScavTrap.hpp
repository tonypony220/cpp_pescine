#include <iostream>
#include "ClapTrap.hpp"
#ifndef CLASS_SCAV_TRAP
# define CLASS_SCAV_TRAP


class ScavTrap : public virtual ClapTrap {

	public: 
	  ScavTrap( std::string name, 
	  		  unsigned int hit = 100, 
	  		  unsigned int eng = 50,
	  		  unsigned int dmg = 20
	  );
	  ~ScavTrap( void );	

	  void attack( std::string const & target );
	  void guardGate( void );
};

#endif
