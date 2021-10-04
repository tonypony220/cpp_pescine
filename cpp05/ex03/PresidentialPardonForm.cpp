#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm( std::string new_name )
		: Form( new_name, 5, 25) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & copy ) {
	*this = copy;
}

//https://edux.pjwstk.edu.pl/mat/260/lec/PRG2CPP_files/node123.html
const PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & other ) {
	this->Form::operator=(other);
//	(Form&)(*this) = other; //: also valid but should be this: static_cast<Form&>(*this) = other;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

void PresidentialPardonForm::executing( void ) const {
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

