#include "Zombie.hpp"

int main( void ) {
	Zombie *p;

	p = new Zombie( "one" );	
	p->announce();
	delete p;
	
	randomChump( "someguy" );
	
	p = new newZombie( "new" );	
	p->announce();
	delete p;

	return 0;
}
