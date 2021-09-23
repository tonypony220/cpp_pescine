#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string new_name, int grade ) : name(new_name), grade(grade) {
	
	if (valid_range())
		return; 
	if (grade > 151)
		throw Bureaucrat::GradeTooHighException();
	else
		throw Bureaucrat::GradeTooLowExceptiona();
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy ) {
	*this = copy;
}

const Bureaucrat & Bureaucrat::operator=( const Bureaucrat & other ) {
	grade = other.grade;
	return *this;	
}

Bureaucrat::~Bureaucrat( void ) {}


std::string Bureaucrat::getName( void ) const {
	return name;
}

bool		Bureaucrat::valid_range( void ) const {
	return grade < 151 && grade > 0 ;
}

int			Bureaucrat::getGrade( void ) const {
	return grade;
}

const Bureaucrat & Bureaucrat::operator++() { 
	grade++;
	if (!valid_range())
		throw Bureaucrat::GradeTooHighException();
	return *this;		
}

const Bureaucrat & Bureaucrat::operator--() { 
	grade--;
	if (!valid_range())
		throw Bureaucrat::GradeTooHighException();
	return *this;		
}

std::ostream & operator<<( std::ostream & o, Bureaucrat & bur ) {
	o << bur.getName();
	o << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return (o);
}	

