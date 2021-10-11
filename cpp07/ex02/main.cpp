#include "Array.hpp"
#include <iostream>

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}


int main() {

		Array<int> a(10); 
		/* std::cout << a; */
		/* delete a; */

}
