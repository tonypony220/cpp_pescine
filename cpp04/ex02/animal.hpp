#include <iostream>
#ifndef CLASS_ANIMAL
# define CLASS_ANIMAL

class Brain {
	public: 
		std::string ideas[100];
};

class Animal {

  protected:
	std::string type;

  public:
	Animal();	
	std::string getType() const ;
	Animal( const Animal & copy );	
	virtual ~Animal( void );	
	virtual const Animal & operator=( const Animal & other );	

	void virtual makeSound() const = 0 ;
};

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog( void );
		virtual ~Dog( void );
		void virtual makeSound() const;
		virtual const Dog & operator=( const Dog & other );	
		Dog( const Dog & copy ) { *this = copy; }	
		Brain * get_brain( void ) { return brain; } ;
};

class Cat : public Animal {
	private:
		Brain* brain;
	public:
		Cat( void );
		virtual ~Cat( void );
		void virtual makeSound() const ;
		virtual const Cat & operator=( const Cat & other );	
		Cat( const Cat & copy ) { *this = copy; }	
		Brain * get_brain( void ) { return brain; } ;
};

#endif
