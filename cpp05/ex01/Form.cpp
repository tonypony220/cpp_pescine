#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) {}

Form::Form( std::string new_name, int grade_exec, int grade_sign )
	: name(new_name),
	  grade_sign(grade_sign), 
	  grade_exec(grade_exec),
	  been_signed(false) 
{
		valid_range();
}

Form::Form( const Form & copy ) {
	*this = copy;
}

const Form & Form::operator=( const Form & other ) {
	name = other.name;
	grade_sign = other.grade_sign;
	grade_exec = other.grade_exec;
	been_signed = other.been_signed;
	return *this;	
}

Form::~Form( void ) {}


std::string Form::getName( void ) const {
	return name;
}

bool			Form::beenSigned( void ) const {
	return been_signed;
}

int			Form::getGradeSign( void ) const {
	return grade_sign;
}

int			Form::getGradeExec( void ) const {
	return grade_exec;
}

void 		Form::setName( std::string n ) { name = n; }

void		Form::setGradeSign( int g ) {
	grade_sign = g;
	valid_range();
}

void		Form::setGradeExec( int g ) {
	grade_exec = g;
	valid_range();
}

void		Form::valid_range( void ) const {
	if ( grade_exec > 150 || grade_sign > 150 ) 
		throw Form::GradeTooLowException();
	if ( grade_exec < 1 || grade_sign < 1 ) 
		throw Form::GradeTooHighException();
}

void		Form::beSigned( Bureaucrat & b ) {
	if ( b.getGrade() < getGradeSign() )
		been_signed = true;		
	else
		throw Form::GradeTooLowException();
}


const char* Form::GradeTooHighException::what() const throw() { return "grade more than requered"; }
const char* Form::GradeTooLowException::what() const throw() { return "grade less requered"; }


std::ostream & operator<<( std::ostream & o, Form & form ) {
	o << form.getName();
	o << ", been signed: " << form.beenSigned();
	o << ", form grade sign: " << form.getGradeSign();
	o << ", form grade execute: " << form.getGradeExec() << std::endl;
	return (o);
}	

