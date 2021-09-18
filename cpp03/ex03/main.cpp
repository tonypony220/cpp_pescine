#include "DiamondTrap.hpp"

int main () { 
	DiamondTrap c( "diamond" );
	c.attack( "another" );		
	c.beRepaired( 20 );		
	c.takeDamage( 20 );		
	c.highFivesGuys();
	c.guardGate();
	c.whoAmI();
}
