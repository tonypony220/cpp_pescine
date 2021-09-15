#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_hitpoints += _attack_damage;
}
void ClapTrap::takeDamage(unsigned int amount) { 
	_energy_points -= amount;
	std::cout << "ClapTrap " << _name << " take damage ";
	std::cout << amount << ", causing " << _energy_points << " points of energy!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount);
	_energy_points += amount;
	std::cout << "ClapTrap " << _name << " be repaired ";
	std::cout << amount << ", causing " << _energy_points << " points of energy!" << std::endl;

ClapTrap::ClapTrap( std::string name,
					unsigned int hit = 10, 
					unsigned int eng = 10,
					unsigned int dmg = 0) : _name(name),
										    _hitpoints(hit), 
										    _energy_points(eng),
										    _attack_damage(dmg)
{	
	std::cout << "ClapTrap: Name constructor called" << std::endl;
}

ClapTrap::ClapTrap() {	
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & copy ) {

	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
}

ClapTrap::~ClapTrap( void ) {	
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

const ClapTrap & ClapTrap::operator=( const ClapTrap & other ) {
	
	return *this;	
}
