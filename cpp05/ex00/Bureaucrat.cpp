#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string new_name, int grade ) : name(new_name), grade(grade) {
	valid_range();
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

void		Bureaucrat::valid_range( void ) const {
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowExceptiona();
}

int			Bureaucrat::getGrade( void ) const {
	return grade;
}

const Bureaucrat & Bureaucrat::operator++() { 
	grade++;
	valid_range();
	return *this;		
}

const Bureaucrat & Bureaucrat::operator--() { 
	grade--;
	valid_range();
	return *this;		
}

std::ostream & operator<<( std::ostream & o, Bureaucrat & bur ) {
	o << bur.getName();
	o << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return (o);
}	

