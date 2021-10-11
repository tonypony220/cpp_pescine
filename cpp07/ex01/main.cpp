#include "iter.hpp"
#include <iostream>

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}


int main() {

	{
		int arr[6] = {1, 2, 3, 4, 5, 6 };		
		iter<int>(arr, 6, &disp<int>); 
		iter(arr, 6, &disp); // works the same
	}

	{
		double arr[6] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66 };		
		iter(arr, 6, &disp);
		iter(arr, 6, &incr);
		iter(arr, 6, &disp);
	}

	{
		std::string arr[6] = {"a", "b", "c", "d", "e", "f" };		
		iter(arr, 6, &disp);
	}
}
