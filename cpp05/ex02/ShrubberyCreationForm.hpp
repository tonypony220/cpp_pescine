#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>

#ifndef CLASS_SHRUBBERYCREATIONFORM
# define CLASS_SHRUBBERYCREATIONFORM
class Bureaucrat;

class ShrubberyCreationForm : public Form {
  private:
  public:
	ShrubberyCreationForm();
	const ShrubberyCreationForm & operator=( const ShrubberyCreationForm & other );
	ShrubberyCreationForm( const ShrubberyCreationForm & copy );
	virtual ~ShrubberyCreationForm( void );

	ShrubberyCreationForm( std::string target );	
	void		executing( void ) const;
};

//std::ostream & operator<<( std::ostream & o, Form & form );

#endif

