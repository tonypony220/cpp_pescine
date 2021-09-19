#include <iostream>
#ifndef CLASS_ANIMAL
# define CLASS_ANIMAL

class Animal {

  protected:
	std::string type;

  public:
	Animal();	
	std::string getType() const ;
	Animal( const Animal & copy );	
	virtual ~Animal( void );	
	const Animal & operator=( const Animal & other );	

	void virtual makeSound() const ;
};

class Dog : public Animal {
	public:
		Dog( void ) : Animal() {type = "Dog";};
		virtual ~Dog( void ) {}
		void virtual makeSound() const ;
};

class Cat : public Animal {
	public:
		Cat( void ) : Animal() { type ="Cat";};
		virtual ~Cat( void ) {}
		void virtual makeSound() const ;
};

#endif
