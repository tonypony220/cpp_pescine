#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *p = new Zombie(name);
	if (p)
		return 0;
	return p;
}
