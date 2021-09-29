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

Form * createShrub(std::string target) { return new ShrubberyCreationForm(target); }
Form * createRobot(std::string target) { return new RobotomyRequestForm(target); }
Form * createPres(std::string target) { return new PresidentialPardonForm(target); }

/* why strings are const */ 
/* https://stackoverflow.com/questions/18565167/non-const-lvalue-references */
Form * Intern::makeForm(const std::string & f, const std::string & target) {
	Form * form = 0;
	std::string form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	/* two ways to make without else if / else */ 

	/* 							first way to do it */
  	Form * ( *p[ARR_LEN] ) ( std::string ) = { &createRobot, &createPres, &createShrub };

    for (int i = 0; i < ARR_LEN; i++)
  		if (!form_names[i].compare(f))
  			form = (*p[i])(target);	

	/* 							second way to do it */

	/* f.compare("robotomy request")    || (form = new RobotomyRequestForm(target)); */	
	/* f.compare("shrubbery creation")  || (form = new ShrubberyCreationForm(target)); */	
	/* f.compare("presidential pardon") || (form = new PresidentialPardonForm(target)); */	

	form || std::cout << "No form fits" << std::endl;
	return form;
}
