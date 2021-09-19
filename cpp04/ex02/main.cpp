#include "animal.hpp"
int main()
{
    const Animal* d = new Dog();
    const Animal* c = new Cat();
	Cat *v = new Cat();
	Dog *vv = new Dog();

	Animal *arr[10];
	for ( size_t i = 0; i < 10; i++ ) {
		if (i < 5) { 
			arr[i] = new Dog();	
		}
		else { 
			arr[i] = new Cat();
		}
		arr[i]->makeSound();
	}
	for ( size_t i = 0; i < 10; i++ ) {
		delete arr[i];
	}

	{
		Cat cc = Cat(*v);
		std::cout << "   cat brain1: " << cc.get_brain() << std::endl;
		std::cout << "   cat brain2: " << v->get_brain() << std::endl;
		std::cout << "   equal: " << (v->get_brain() == cc.get_brain()) << std::endl;
	}
	{
		Dog cc = Dog(*vv);
		std::cout << "   dog brain1: " << cc.get_brain() << std::endl;
		std::cout << "   dog brain2: " << v->get_brain() << std::endl;
		std::cout << "   equal: " << (v->get_brain() == cc.get_brain()) << std::endl;
	}

    delete d; //should not create a leak
	delete c; 
    delete v;  //should not create a leak
    delete vv; //should not create a leak
}
