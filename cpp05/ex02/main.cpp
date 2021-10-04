#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main() {
	Bureaucrat b("bob", 10);
	Bureaucrat v("jop", 147);
	ShrubberyCreationForm f2("declaration"); 
	RobotomyRequestForm f3("robocop form"); 
	PresidentialPardonForm f4("employee form");

	ShrubberyCreationForm f5(f2);
	std::cout << "COPY: " << f2 << std::endl;
	std::cout << "COPY: " << f5 << std::endl;

	v.signForm(f2);
	v.signForm(f3);
	v.signForm(f4);

	b.executeForm(f2);	
	b.executeForm(f3);
	b.executeForm(f4);

	v.executeForm(f2);	
	v.executeForm(f3);
	v.executeForm(f4);

	b.signForm(f2);
	b.signForm(f3);
	b.signForm(f4);


	b.executeForm(f2);	
	b.executeForm(f3);
	b.executeForm(f4);

	v.executeForm(f2);	
	v.executeForm(f3);
	v.executeForm(f4);

	
}
