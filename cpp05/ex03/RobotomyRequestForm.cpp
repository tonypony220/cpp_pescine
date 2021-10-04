#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <unistd.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm( std::string new_name )
		: Form( new_name, 45, 72) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & copy ) {
	*this = copy;
}

//https://edux.pjwstk.edu.pl/mat/260/lec/PRG2CPP_files/node123.html
const RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & other ) {
	this->Form::operator=(other);
//	(Form&)(*this) = other; //: also valid but should be this: static_cast<Form&>(*this) = other;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}


void RobotomyRequestForm::executing( void ) const {
	/* system("say weeweeweeweeweeee"); */	
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	if (rand() % 2)
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getName() << " robotomized failure " << std::endl;
}
