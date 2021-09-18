#include <iostream>
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

#ifndef CLASS_DIAMOND_TRAP
# define CLASS_DIAMOND_TRAP


class DiamondTrap : virtual  public FlagTrap,  virtual public ScavTrap {

	private: 
		std::string _name;

	public: 
	  DiamondTrap( std::string name, 
				   unsigned int hit = 100, 
	  		  	   unsigned int eng = 50,
	  		  	   unsigned int dmg = 30
	  );

	 ~DiamondTrap( void );	

	  void whoAmI();
};

#endif
