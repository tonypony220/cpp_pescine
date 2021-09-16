#include "FlagTrap.hpp"

int main () { 
	FlagTrap c( "clap" );
	c.attack( "another" );		
	c.beRepaired( 20 );		
	c.takeDamage( 20 );		
	c.highFivesGuys();
}
