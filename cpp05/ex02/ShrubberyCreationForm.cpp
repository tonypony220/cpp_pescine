#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

//ShrubberyCreationForm::ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string new_name ) : 
									 Form( new_name ), 
									 name(new_name),
									 grade_sign(145), 
									 grade_exec(137),
									 been_signed(false) {
		valid_range();
}

///* wtf method */
//ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & copy ) {
//	*this = copy;
//}
//
///* wtf method */
//const ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & other ) {
//	return other;
//}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}


std::string ShrubberyCreationForm::getName( void ) const {
	return name;
}

bool		ShrubberyCreationForm::beenSigned( void ) const {
	return been_signed;
}

int			ShrubberyCreationForm::getGradeSign( void ) const {
	return grade_sign;
}

int			ShrubberyCreationForm::getGradeExec( void ) const {
	return grade_exec;
}

void 		ShrubberyCreationForm::setName( const std::string n ) {
	name = n;
}

void		ShrubberyCreationForm::valid_range( void ) const {
	if ( grade_exec > 150 || grade_sign > 150 )
		throw Form::GradeTooLowException();
	if ( grade_exec < 1 || grade_sign < 1 )
		throw Form::GradeTooHighException();
}

void		ShrubberyCreationForm::beSigned( Bureaucrat & b ) {
	if ( b.getGrade() < getGradeSign() )
		been_signed = true;
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}

void ShrubberyCreationForm::executing( void ) const {
	std::ofstream out( name + "_shrubbery" );
	if (!out) {
		std::cout << "error: filerror" << std::endl;
		return;
	}
	out << ("\
	   '.,\n\
        'b      *\n\
         '$    #.\n\
          $:   #:\n\
          *#  @):\n\
          :@,@):   ,.**:'\n\
,         :@@*: ..**'\n\
 '#o.    .:(@'.@*''\n\
    'bq,..:,@@*'   ,*\n\
    ,p$q8,:@)'  .p*'\n\
   '    '@@Pp@@*'\n\
         Y7'.'\n\
        :@):.\n\
       .:@:'.\n\
     .::(@:.            ");
}

/* void 		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const { */
/* 	if ( executor.getGrade() > getGradeExec() ) */
/* 		throw Form::GradeTooLowException(); */
/* 	if (!beenSigned()) */
/* 		throw Form::FormNotSigned(); */
/*  	executing(); */	
/* } */

/* const char* ShrubberyCreationForm::GradeTooHighException::what() const throw() { return "grade more 150"; } */
/* const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() { return "grade less 1"; } */


std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm & form ) {
	o << form.getName();
	o << ", been signed: " << form.beenSigned();
	o << ", form grade sign: " << form.getGradeSign();
	o << ", form grade execute: " << form.getGradeExec() << std::endl;
	return (o);
}	

