#include "Bureaucrat.hpp"
/* #include "Form.hpp" */
/* #include "ShrubberyCreationForm.hpp" */
/* #include "RobotomyRequestForm.hpp" */
/* #include "PresidentialPardonForm.hpp" */
#include "Intern.hpp"
/* #include "animal.hpp" */
#include <iostream>

int main() {
	Intern someRandomIntern;
	Bureaucrat b("bob", 10);
	Bureaucrat v("jop", 147);

	/* std::string form_names[3] = {"robotomy reques", "presidential pardon", "shrubbery creation"}; */
	Form * f1 = someRandomIntern.makeForm("dddddd", "Bender");
	if (f1 == NULL)
		std::cout << "ok" << std::endl;
	else
		std::cout << "fail" << std::endl;

	Form * f4 = someRandomIntern.makeForm("shrubbery creation", "BOOB");
	Form * f2 = someRandomIntern.makeForm("robotomy request", "Bender");
	Form * f3 = someRandomIntern.makeForm("presidential pardon", "YO");

	v.signForm(*f2);
	v.signForm(*f3);
	v.signForm(*f4);

	b.executeForm(*f2);
	b.executeForm(*f3);
	b.executeForm(*f4);

	v.executeForm(*f2);
	v.executeForm(*f3);
	v.executeForm(*f4);

	b.signForm(*f2);
	b.signForm(*f3);
	b.signForm(*f4);


	b.executeForm(*f2);
	b.executeForm(*f3);
	b.executeForm(*f4);

	v.executeForm(*f2);
	v.executeForm(*f3);
	v.executeForm(*f4);

	delete f2;
	delete f3;
	delete f4;
	
}
