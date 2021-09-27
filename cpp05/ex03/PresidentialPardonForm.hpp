#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>

#ifndef CLASS_PRESIDENTIALPARDONFORM
# define CLASS_PRESIDENTIALPARDONFORM
class Bureaucrat;

class PresidentialPardonForm : public Form {

  private:
	const std::string name;
	int grade_sign;
	int grade_exec;
	bool been_signed;

	/* below private cause can't be used */
	PresidentialPardonForm();	
	const PresidentialPardonForm & operator=( const PresidentialPardonForm & other );	
	PresidentialPardonForm( const PresidentialPardonForm & copy );

  public:

	PresidentialPardonForm( std::string target );	
	virtual ~PresidentialPardonForm( void );	

	bool		beenSigned() const ;
	void		beSigned( Bureaucrat & b );
	void		valid_range( void )  const ;
	std::string getName( void ) 	 const ;
	int			getGradeSign( void ) const ;
	int			getGradeExec( void ) const ;
	void		executing(void) const;	
	/* void 		execute( Bureaucrat const & executor ) const; */

	/* class GradeTooHighException : public std::exception { */
	/* 	virtual const char* what() const throw(); */
	/* }; */
	/* class GradeTooLowException : public std::exception { */
	/* 	virtual const char* what() const throw(); */
	/* }; */

};


std::ostream & operator<<( std::ostream & o, Form & form );

#endif

