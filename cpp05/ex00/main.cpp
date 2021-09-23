#include "Bureaucrat.hpp"
/* #include "animal.hpp" */
#include <iostream>
int main() {
	try {
		Bureaucrat b = Bureaucrat("bob", 1);
		Bureaucrat v = Bureaucrat("bob", 150);
		std::cout << v << std::endl ;
		--b;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl ;
	}
}
