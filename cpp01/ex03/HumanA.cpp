#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string new_name, Weapon & new_gun ) : gun( new_gun ) {
	name = new_name;
}

void HumanA::setWeapon( Weapon & new_gun ) {
	gun = new_gun;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << gun.getType() << std::endl;
}
