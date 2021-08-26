#include "Zombie.hpp"

int main( void ) {
	Zombie *p;
	int N = 4; 

	p = zombieHorde( N, "zombie" );

	for ( ; N > 0 ; N-- ) 
		p[N].announce(); 

	delete [] p;
	return 0;
}
