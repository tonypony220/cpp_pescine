#ifndef CLASS_CHARACTER
# define CLASS_CHARACTER

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public virtual ICharacter
{
	protected:
		std::string name;
		AMateria * inventory[4];

	public:
		Character( void ) {}
		virtual ~Character() {}
		virtual std::string const & getName() const { return name; }
		virtual void equip(AMateria* m); 
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4 ; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) { 
	if (inventory[idx])
		inventory[idx] = 0;
}
	
void Character::use(int idx, ICharacter & target) {
	if (inventory[idx])
		inventory[idx]->use( target );
}


#endif
