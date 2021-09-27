#include "Intern.hpp"
/* #include "Bureaucrat.hpp" */

Intern::Intern( void ) {}

/* wtf method */
Intern::Intern( const Intern & copy ) {
	*this = copy;
}

/* wtf method */
const Intern & Intern::operator=( const Intern & other ) { return other; }

Intern::~Intern( void ) {}

/* why strings are const */ 
/* https://stackoverflow.com/questions/18565167/non-const-lvalue-references */
Form * Intern::makeForm(const std::string & f, const std::string & target) {
	Form * form = 0;
	std::string form_names[3] = {"robotomy reques", "presidential pardon", "shrubbery creation"};
	f.compare("robotomy request")    || (form = new RobotomyRequestForm(target));	
	f.compare("shrubbery creation")  || (form = new ShrubberyCreationForm(target));	
	f.compare("presidential pardon") || (form = new PresidentialPardonForm(target));	
	form || std::cout << "No form fits" << std::endl;
	return form;
}
