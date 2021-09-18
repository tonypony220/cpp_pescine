#include <iostream>
#ifndef CLASS_ANIMAL
# define CLASS_ANIMAL

class Animal {

  protected:
	std::string type;

  public:
	Animal();	
	std::string getType();
	Animal( const Animal & copy );	
	~Animal( void );	
	const Animal & operator=( const Animal & other );	

	void makeSound();
};

class Dog : public Animal {
	private:
		std::string sound;
	public:
		Dog( void ) : Animal(), type("Dog"), sound("woof") {};
};

class Cat : public Animal {
	private:
		std::string sound;
	public:
		Cat( void ) : Animal(), type("Cat"), sound("meeew") {};
	
};

#endif
