#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat b("bob", 1);
		Bureaucrat v("snob", 150);
		std::cout << v << std::endl ;
		--b;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}
	Bureaucrat b("bob", 10);
	Bureaucrat v("jop", 147);
	ShrubberyCreationForm f1("declaration of penis"); 
	ShrubberyCreationForm f2("declaration of some shit"); 
	RobotomyRequestForm f3("robocop"); 
	PresidentialPardonForm f4("employee"); 
	b.signForm(f1);
	v.signForm(f2);
	b.signForm(f3);
	b.signForm(f4);
	b.executeForm(f1);	
	v.executeForm(f1);
	b.executeForm(f2);	
	b.executeForm(f3);
	v.executeForm(f4);
	b.executeForm(f4);
	std::cout << v << std::endl ;
	
}
