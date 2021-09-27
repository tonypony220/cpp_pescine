#include "Bureaucrat.hpp"
#include "Form.hpp"
/* #include "animal.hpp" */
#include <iostream>
int main() {
	try {
		Bureaucrat b("bob", 1);
		Bureaucrat v("bob", 150);
		std::cout << v << std::endl ;
		--b;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}
	Bureaucrat b("bob", 12);
	Bureaucrat v("jop", 120);
	Form f1("declaration of independense", 100, 20); 
	Form f2("declaration of some shit", 100, 10); 
	b.signForm(f1);
	b.signForm(f2);
	std::cout << v << std::endl ;
	
}
