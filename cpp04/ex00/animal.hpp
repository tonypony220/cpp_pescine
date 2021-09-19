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
		Dog( void );
		virtual ~Dog( void ) {}
		void virtual makeSound() const ;
};

class Cat : public Animal {
	public:
		Cat( void );
		virtual ~Cat( void ) {}
		void virtual makeSound() const ;
};

class WrongAnimal {

  protected:
	std::string type;

  public:
	WrongAnimal();	
	std::string getType() const ;
	WrongAnimal( const WrongAnimal & copy );	
	~WrongAnimal( void );	
	const WrongAnimal & operator=( const WrongAnimal & other );	

	void makeSound() const ;
};

class WrongDog : public WrongAnimal {
	public:
		WrongDog( void );
		~WrongDog( void ) {}
		void makeSound() const ;
};

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		~WrongCat( void ) {}
		void makeSound() const ;
};

#endif
