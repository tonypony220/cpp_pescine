#include "ClapTrap.hpp"

void ClapTrap::attack( std::string const & target ) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_hitpoints += _attack_damage;
}

void ClapTrap::takeDamage( unsigned int amount ) { 
	if (amount > _energy_points)
		_energy_points = 0;
	else 
	_energy_points -= amount;
	std::cout << "ClapTrap " << _name << " take damage ";
	std::cout << amount << ", causing " << _energy_points << " points of energy!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	_energy_points += amount;
	std::cout << "ClapTrap " << _name << " be repaired ";
	std::cout << amount << ", causing " << _energy_points << " points of energy!" << std::endl;
}

ClapTrap::ClapTrap( std::string name,
					unsigned int hit, 
					unsigned int eng,
					unsigned int dmg) : _name(name),
										_hitpoints(hit), 
										_energy_points(eng),
										_attack_damage(dmg)
{	
	std::cout << "ClapTrap: Constructor called" << std::endl;
}


ClapTrap::ClapTrap( const ClapTrap & copy ) {

	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {	
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

const ClapTrap & ClapTrap::operator=( const ClapTrap & other ) {
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return *this;	
}
