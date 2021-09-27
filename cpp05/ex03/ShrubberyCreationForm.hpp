#include <iostream>
#include <exception>
#include "Form.hpp"
#include <fstream>

#ifndef CLASS_SHRUBBERYCREATIONFORM
# define CLASS_SHRUBBERYCREATIONFORM
class Bureaucrat;

class ShrubberyCreationForm : public Form {

  private:
	const std::string name;
	int grade_sign;
	int grade_exec;
	bool been_signed;

	/* below private cause can't be used */
	ShrubberyCreationForm();	
	const ShrubberyCreationForm & operator=( const ShrubberyCreationForm & other );	
	ShrubberyCreationForm( const ShrubberyCreationForm & copy );

  public:

	ShrubberyCreationForm( std::string target );	
	virtual ~ShrubberyCreationForm( void );	

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

