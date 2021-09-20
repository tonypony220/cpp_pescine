#include "ichar.hpp"
#include "materia.hpp"

/* Character::Character( void ) { */
/* 	for (int i = 0; i < 4 ; i++) { */ 
/* 			inventory[i] = 0; */
/* 			std::cout << "\t\tinit : " << i << " " << inventory[i] << std::endl; */
/* 	} */
/* } */

const Character & Character::operator=( const Character & other ) {
	name = other.name;
	for (int i = 0 ; i < 4 ; i++) { 
		/* if (i < 4 && other.inventory[i]) */
		inventory[i] = other.inventory[i];
	}
	return *this;
}

Character::Character( const Character & copy ) { 
	*this = copy;
}

Character::Character( std::string n ) : name(n) {
	for (int i = 0; i < 4 ; i++) { 
			inventory[i] = 0;
			/* std::cout << "\t\tinit : " << i << " " << inventory[i] << std::endl; */
	}
}


void Character::equip( AMateria* m ) {
	for (int i = 0; i < 4 ; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) { 
	if (idx < 4 && inventory[idx])
		inventory[idx] = 0;
}

void Character::use(int idx, ICharacter & target) {
	if (idx < 4 && inventory[idx]) { 
		/* std::cout << "inventory : " << idx << " " << inventory[idx]->getType() << std::endl; */
		inventory[idx]->use( target );
	}
}
