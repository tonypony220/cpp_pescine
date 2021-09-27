#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#ifndef CLASS_INTERN
# define CLASS_INTERN

class Bureaucrat;

class Intern {

  public:

	Intern();	
	const Intern & operator=( const Intern & other );	
	Intern( const Intern & copy );
	virtual ~Intern( void );

	static Form * makeForm(const std::string & f, const std::string & target);

};


std::ostream & operator<<( std::ostream & o, Intern & form );

#endif

