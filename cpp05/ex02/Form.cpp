#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) {}

Form::Form( std::string new_name, int grade_exec, int grade_sign )
	:
	name(new_name),
	grade_sign(grade_sign),
	grade_exec(grade_exec),
	been_signed(false) {
		valid_range();
}

Form::Form( const Form & copy ) {
	*this = copy;
}

const Form & Form::operator=( const Form & other ) {
//	std::cout << "Form:: assignaltion called" << std::endl;
	setName(other.getName());
	setGradeExec(other.getGradeExec());
	setGradeSign(other.getGradeSign());
	setSigned(other.beenSigned());
	return *this;
}

Form::~Form( void ) {}

std::string Form::getName( void ) const {
	return name;
}

bool			Form::beenSigned( void ) const {
	return been_signed;
}

void			Form::setSigned( bool b ) { been_signed = b; }

int			Form::getGradeSign( void ) const {
	return grade_sign;
}

int			Form::getGradeExec( void ) const {
	return grade_exec;
}

void 		Form::setName( const std::string n ) {
	name = n;
}

void		Form::setGradeSign( int g ) {
	grade_sign = g;
//	valid_range();
}

void		Form::setGradeExec( int g ) {
	grade_exec = g;
//	valid_range();
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


void		Form::executing( void ) const {}

void 		Form::execute( Bureaucrat const & executor ) const {
	if ( executor.getGrade() > getGradeExec() )
		throw Form::GradeTooLowException();
	if (!beenSigned())
		throw Form::FormNotSigned();
 	executing();	
}

const char* Form::GradeTooHighException::what() const throw() { return "grade more then requered"; }
const char* Form::GradeTooLowException::what() const throw() { return "grade less then requered"; }
const char* Form::FormNotSigned::what() const throw() { return "form not signed"; }


std::ostream & operator<<( std::ostream & o, Form & form ) {
	o << form.getName();
	o << ", been signed: " << form.beenSigned();
	o << ", form grade sign: " << form.getGradeSign();
	o << ", form grade execute: " << form.getGradeExec() << std::endl;
	return (o);
}	

