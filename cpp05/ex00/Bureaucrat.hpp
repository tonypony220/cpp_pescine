#include <iostream>
#include <exception>

#ifndef CLASS_BUREAUCRAT
# define CLASS_BUREAUCRAT

class Bureaucrat {

  private:
	const std::string name ;
	int grade;

	/* below private cause can't be used */
	Bureaucrat();

  public:
	Bureaucrat( const Bureaucrat & copy );	
	const Bureaucrat & operator=( const Bureaucrat & other );	
	Bureaucrat( std::string , int grade = 150 );	
	virtual ~Bureaucrat( void );	

	void		valid_range( void ) const ;
	std::string getName( void ) const ;
	int			getGrade( void ) const ;
	void		setGrade( int );

	const Bureaucrat & operator--();
	const Bureaucrat & operator++();

	class GradeTooHighException : public std::exception {
		/* virtual const char* what() const throw(); */ };

	class GradeTooLowExceptiona : public std::exception {};
	class Forbidden : public std::exception {};
};


std::ostream & operator<<( std::ostream & o, Bureaucrat & bur );

#endif

