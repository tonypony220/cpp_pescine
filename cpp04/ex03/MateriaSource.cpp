#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4 ; i++ )
			inventory[i] = 0;
}

void MateriaSource::learnMateria( AMateria * m ) {
	for (int i = 0; i < 4 ; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4 ; i++) {
		if (inventory[i] && inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}

MateriaSource::~MateriaSource() { 
	for (int i = 0; i < 4 ; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
}

