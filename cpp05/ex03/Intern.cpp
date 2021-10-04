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

// those may be not members function but subject make us to do that
Form * Intern::createShrub(std::string target) { return new ShrubberyCreationForm(target); }
Form * Intern::createRobot(std::string target) { return new RobotomyRequestForm(target); }
Form * Intern::createPres(std::string target) { return new PresidentialPardonForm(target); }

/* why strings are const */ 
/* https://stackoverflow.com/questions/18565167/non-const-lvalue-references */
Form * Intern::makeForm(const std::string & f, const std::string & target) {
	Form * form = 0;
	std::string form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
  	Form * ( Intern::*p[ARR_LEN] ) ( std::string ) = { &Intern::createRobot, &Intern::createPres, &Intern::createShrub };
	  // 		**** if need to make static members or just funcs
	//Form * ( *p[ARR_LEN] ) ( std::string ) = { &createRobot, &createPres, &createShrub };

	for (int i = 0; i < ARR_LEN; i++)
  		form_names[i].compare(f) || (form = (this->*p[i])(target));
	// 			**** if need to make static members
	// 	form_names[i].compare(f) || (form = (*p[i])(target));
	form || std::cout << "No form fits" << std::endl;
	return form;
}
