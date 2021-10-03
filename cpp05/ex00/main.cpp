#include "Bureaucrat.hpp"
/* #include "animal.hpp" */
#include <iostream>

int main() {
	try {
		Bureaucrat b("bob", 1);
		std::cout << b << std::endl;
		++b;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}
	try {
		Bureaucrat b("bob", 149);
		--b;
		--b;
		std::cout << b << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}

	try {
		Bureaucrat b("bob", 160);
		std::cout << b << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}

	try {
		Bureaucrat b("bob", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}
}
