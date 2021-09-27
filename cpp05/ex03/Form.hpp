#include <iostream>
#include <exception>

#ifndef CLASS_FORM
# define CLASS_FORM
class Bureaucrat;

class Form {

  private:
	const std::string name;
	int grade_sign;
	int grade_exec;
	bool been_signed;

	/* below private cause can't be used */
	const Form & operator=( const Form & other );	
	Form( const Form & copy );

  public:

	Form();	
	Form( std::string, int grade_exec = 149, int grade_sign = 149 );	
	virtual ~Form( void );	

	virtual bool		beenSigned() const ;
	virtual void		beSigned( Bureaucrat & b );
	virtual void		valid_range( void )  const ;
	virtual std::string getName( void ) 	 const ;
	virtual int			getGradeSign( void ) const ;
	virtual int			getGradeExec( void ) const ;
	virtual void 		execute( Bureaucrat const & executor ) const;
	virtual void		executing( void ) const ;

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class FormNotSigned : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

};


std::ostream & operator<<( std::ostream & o, Form & form );

#endif

