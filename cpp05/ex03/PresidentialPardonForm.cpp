#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm( std::string new_name ) : 
									 Form( new_name ), 
									 name(new_name),
									 grade_sign(145), 
									 grade_exec(137),
									 been_signed(false) {
		valid_range();
}

/* wtf method */
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & copy ) {
	*this = copy;
}

/* wtf method */
const PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & other ) {
	return other;	
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}


std::string PresidentialPardonForm::getName( void ) const {
	return name;
}

bool		PresidentialPardonForm::beenSigned( void ) const {
	return been_signed;
}

int			PresidentialPardonForm::getGradeSign( void ) const {
	return grade_sign;
}

int			PresidentialPardonForm::getGradeExec( void ) const {
	return grade_exec;
}

void		PresidentialPardonForm::valid_range( void ) const {
	if ( grade_exec > 150 || grade_sign > 150 ) 
		throw Form::GradeTooHighException();
	if ( grade_exec < 1 || grade_sign < 1 ) 
		throw Form::GradeTooLowException();
}

void		PresidentialPardonForm::beSigned( Bureaucrat & b ) {
	if ( b.getGrade() < getGradeSign() )
		been_signed = true;
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

void PresidentialPardonForm::executing( void ) const {
	std::cout << name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm & form ) {
	o << form.getName();
	o << ", been signed: " << form.beenSigned();
	o << ", form grade sign: " << form.getGradeSign();
	o << ", form grade execute: " << form.getGradeExec() << std::endl;
	return (o);
}	

