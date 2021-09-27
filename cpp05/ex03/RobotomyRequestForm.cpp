#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm( std::string new_name ) : 
									 Form( new_name ), 
									 name(new_name),
									 grade_sign(72), 
									 grade_exec(45),
									 been_signed(false) {
		valid_range();
}

/* wtf method */
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & copy ) {
	*this = copy;
}

/* wtf method */
const RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & other ) {
	return other;	
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}


std::string RobotomyRequestForm::getName( void ) const {
	return name;
}

bool		RobotomyRequestForm::beenSigned( void ) const {
	return been_signed;
}

int			RobotomyRequestForm::getGradeSign( void ) const {
	return grade_sign;
}

int			RobotomyRequestForm::getGradeExec( void ) const {
	return grade_exec;
}

void		RobotomyRequestForm::valid_range( void ) const {
	if ( grade_exec > 150 || grade_sign > 150 ) 
		throw Form::GradeTooHighException();
	if ( grade_exec < 1 || grade_sign < 1 ) 
		throw Form::GradeTooLowException();
}

void		RobotomyRequestForm::beSigned( Bureaucrat & b ) {
	if ( b.getGrade() < getGradeSign() )
		been_signed = true;
	else
		throw RobotomyRequestForm::GradeTooLowException();
}

void RobotomyRequestForm::executing( void ) const {
	/* system("say weeweeweeweeweeee"); */	
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	usleep(100000);
	std::cout << "\a" << std::endl;
	std::cout << name << " has been robotomized successfully fifty percent of the time" << std::endl;
	/* std::string words = "say weeweeweeweeweeee" + name + " has been robotomized successfully fifty percent of the time"; */
	/* system(words.c_str()); */	
}

/* void 		RobotomyRequestForm::execute( Bureaucrat const & executor ) const { */
/* 	if ( executor.getGrade() > getGradeExec() ) */
/* 		throw Form::GradeTooLowException(); */
/* 	if (!beenSigned()) */
/* 		throw Form::FormNotSigned(); */
/*  	executing(); */	
/* } */

/* const char* RobotomyRequestForm::GradeTooHighException::what() const throw() { return "grade more 150"; } */
/* const char* RobotomyRequestForm::GradeTooLowException::what() const throw() { return "grade less 1"; } */


std::ostream & operator<<( std::ostream & o, RobotomyRequestForm & form ) {
	o << form.getName();
	o << ", been signed: " << form.beenSigned();
	o << ", form grade sign: " << form.getGradeSign();
	o << ", form grade execute: " << form.getGradeExec() << std::endl;
	return (o);
}	

