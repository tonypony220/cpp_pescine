#include "Bureaucrat.hpp"
#include "Form.hpp"
/* #include "animal.hpp" */
#include <iostream>

int main() {
	/* fst tests */
	/* try { */
	/* 	Bureaucrat b("bob", 1); */
	/* 	std::cout << b << std::endl; */
	/* 	--b; */
	/* } */
	/* catch (std::exception & e) { */
	/* 	std::cout << e.what() << std::endl ; */
	/* } */
	/* try { */
	/* 	Bureaucrat b("bob", 149); */
	/* 	++b; */
	/* 	++b; */
	/* 	std::cout << b << std::endl; */
	/* } */
	/* catch (std::exception & e) { */
	/* 	std::cout << e.what() << std::endl ; */
	/* } */

	/* try { */
	/* 	Bureaucrat b("bob", 160); */
	/* 	std::cout << b << std::endl; */
	/* } */
	/* catch (std::exception & e) { */
	/* 	std::cout << e.what() << std::endl ; */
	/* } */

	/* try { */
	/* 	Bureaucrat b("bob", 160); */
	/* 	std::cout << b << std::endl; */
	/* } */
	/* catch (std::exception & e) { */
	/* 	std::cout << e.what() << std::endl ; */
	/* } */

	Bureaucrat b("bob", 12);
	Bureaucrat v("jop", 120);
	Form f1("declaration of independense", 100, 20); 
	Form f2("form of tomatos imdependment", 100, 10); 
	std::cout << f1 << std::endl ;
	std::cout << f2 << std::endl ;
	b.signForm(f1);
	b.signForm(f2);
	v.signForm(f1);
	v.signForm(f2);
	std::cout << f1 << std::endl ;
	std::cout << f2 << std::endl ;
	
}
