#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>
#include <stdlib.h>

#ifndef CLASS_ROBOTOMYREQUESTFORM
# define CLASS_ROBOTOMYREQUESTFORM
class Bureaucrat;

class RobotomyRequestForm : public Form {

  public:
	RobotomyRequestForm();
	const RobotomyRequestForm & operator=( const RobotomyRequestForm & other );
	RobotomyRequestForm( const RobotomyRequestForm & copy );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm( std::string target );
	void		executing(void) const;
};

#endif

