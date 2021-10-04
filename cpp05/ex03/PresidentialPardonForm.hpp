#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>

#ifndef CLASS_PRESIDENTIALPARDONFORM
# define CLASS_PRESIDENTIALPARDONFORM
class Bureaucrat;

class PresidentialPardonForm : public Form {

  public:
	PresidentialPardonForm();
	const PresidentialPardonForm & operator=( const PresidentialPardonForm & other );
	PresidentialPardonForm( const PresidentialPardonForm & copy );
	PresidentialPardonForm( std::string target );
	virtual ~PresidentialPardonForm( void );

	void	executing(void) const;
};


//std::ostream & operator<<( std::ostream & o, Form & form );

#endif

