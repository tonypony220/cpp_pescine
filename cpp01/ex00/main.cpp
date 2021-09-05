#include "Zombie.hpp"

int main( void ) {
	Zombie *p;

	p = new Zombie( "one" );	
	p->announce();
	delete p;
	
	randomChump( "someguy" );
	
	p = new Zombie( "new" );	
	p->announce();
	delete p;

	return 0;
}
