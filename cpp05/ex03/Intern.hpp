#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#ifndef CLASS_INTERN
# define CLASS_INTERN
#define ARR_LEN 3

class Bureaucrat;

class Intern {

  public:
	Intern();
	const Intern & operator=( const Intern & other );	
	Intern( const Intern & copy );
	virtual ~Intern( void );

	Form * makeForm(const std::string & f, const std::string & target);

	Form * createShrub(std::string target) ;
	Form * createRobot(std::string target) ;
	Form * createPres(std::string target) ;

};


std::ostream & operator<<( std::ostream & o, Intern & form );

#endif

