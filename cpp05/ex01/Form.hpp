#include <iostream>
#include <exception>

#ifndef CLASS_FORM
# define CLASS_FORM
class Bureaucrat;

class Form {

  private:
	std::string name;
	int grade_sign;
	int grade_exec;
	bool been_signed;


  public:

	Form();
	const Form & operator=( const Form & other );
	Form( const Form & copy );
	Form( std::string, int grade_exec, int grade_sign );
	virtual ~Form( void );	

	bool		beenSigned( void ) const ;
	void		beSigned( Bureaucrat & b );
	void		valid_range( void )  const ;
	std::string getName( void ) 	 const ;
	int			getGradeSign( void ) const ;
	int			getGradeExec( void ) const ;

	void 		setName( std::string ) ;
	void		setGradeSign( int ) ;
	void		setGradeExec( int ) ;

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

};


std::ostream & operator<<( std::ostream & o, Form & form );

#endif

