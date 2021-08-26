#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string new_name ) {
	name = new_name;
}

void HumanB::setWeapon( Weapon & new_gun ) {
	gun = new_gun;
}

void HumanB::attack() {
	std::cout << name << " attacks with his " << gun.getType() << std::endl;
}
