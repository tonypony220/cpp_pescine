#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *p;

	if ( N < 0 || !( p = new Zombie[N]))
		return NULL;

	for ( ; N >= 0 ; N-- ) { 
		p[N].set_name( name );
	} 
	return ( p );
}
