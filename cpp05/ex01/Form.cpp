#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) {}

Form::Form( std::string new_name, int grade_exec , int grade_sign )
	: name(new_name),
	  grade_sign(grade_sign) , 
	  grade_exec(grade_exec),
	  been_signed(false) {
		valid_range();
}

/* wtf method */
Form::Form( const Form & copy ) {
	*this = copy;
}

/* wtf method */
const Form & Form::operator=( const Form & other ) {
	return other;	
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

void		Form::valid_range( void ) const {
	if ( grade_exec > 150 || grade_sign > 150 ) 
		throw Form::GradeTooHighException();
	if ( grade_exec < 1 || grade_sign < 1 ) 
		throw Form::GradeTooLowException();
}

void		Form::beSigned( Bureaucrat & b ) {
	if ( b.getGrade() > getGradeSign() )
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

