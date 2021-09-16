#include "ScavTrap.hpp"

int main () { 
	ScavTrap c( "clap" );
	c.attack( "another" );		
	c.beRepaired( 20 );		
	c.takeDamage( 20 );		
	c.guardGate();
}
