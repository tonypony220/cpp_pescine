#include <iostream>
#include <exception>
#include "Form.hpp"

#ifndef CLASS_BUREAUCRAT
# define CLASS_BUREAUCRAT
class Form;

class Bureaucrat {

  private:
	const std::string name ;
	int grade;

	/* below private cause can't be used */
	Bureaucrat();	
	const Bureaucrat & operator=( const Bureaucrat & other );	
	Bureaucrat( const Bureaucrat & copy );	

  public:
	Bureaucrat( std::string , int grade = 150 );	
	virtual ~Bureaucrat( void );	

	void		valid_range( void ) const ;
	std::string getName( void ) const ;
	int			getGrade( void ) const ;

	const Bureaucrat & operator--();
	const Bureaucrat & operator++();

	void signForm( Form & f );
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception {
		/* virtual const char* what() const throw(); */
	};
	class GradeTooLowException : public std::exception {
	};
};


std::ostream & operator<<( std::ostream & o, Bureaucrat & bur );

#endif

