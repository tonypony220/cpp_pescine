#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main ( void ) { 
	std::string g;
	Weapon w = Weapon();	
	w.setType( "sword" );
	
	HumanA h = HumanA( "jack", w );
	h.attack();

	{
		Weapon	club = Weapon("crude spiked club");
		std::cout << &club << "\n";
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
