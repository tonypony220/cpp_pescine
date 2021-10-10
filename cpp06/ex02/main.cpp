#include "BaseABC.hpp"
/* #include "animal.hpp" */
#include <iostream>
#include <unistd.h>


int main() {
	srand (time(NULL));
	{
		Base *p[10];
		Base *n ;

		std::cout << "mandatory part\n";
		for (int i = 0; i < 10 ; i++) {
			n = generate();
//			identify(n);
			p[i] =n ;
		}
		for (int i = 0; i < 10 ; i++) {
			identify(p[i]);     // as ptr
			identify(*p[i]); // as ref
		}
		for (int i = 0; i < 10 ; i++) {
			delete p[i];
		}
	}
	// example with replacement
	std::cout << "\nreplacement\n";
	{
		Base p[10];

		for (int i = 0; i < 10 ; i++)
			generate(p[i]);
		for (int i = 0; i < 10 ; i++) { identify(p[i]); }
		// here
	}

}
