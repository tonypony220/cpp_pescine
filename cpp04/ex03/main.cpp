#include "materia.hpp"

int main()
{
	Ice i = Ice();
	Cure cc = Cure();
	Character cha = Character("person");

	std::cout << "type : " << i.getType() << std::endl;
	std::cout << "type : " << cc.getType() << std::endl;

	cha.inv("cha");
	cha.equip(&i);
	cha.equip(&cc);
	cha.equip(i.clone());
	cha.inv("cha");

	Character c = Character(cha);

	cha.unequip(1);
	cha.unequip(2);
	cha.unequip(0);
	cha.inv("cha UN");
	c.inv("c");
	/* cha.equip(i.clone()); */
	/* for (int i = 0; i< 4 ; i++) */ 
	/* 	std::cout << "INVENTORY : " << i << " " << c.inventory[i] << std::endl; */

	c.use(1, c);
	c.use(2, c);
	c.use(3, c);
	c.use(4, c);

	c.use(4, c);
}
