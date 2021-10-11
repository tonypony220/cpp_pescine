#include "whatever.hpp"
#include <iostream>

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}

int main() {


	std::cout << " ----- SWAP -----" << std::endl;
	{
		int a = 1, b = 2;
		std::cout << "int: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		swap(a, b);
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
	}
	{
		float a = 1.2, b = 2.2;
		std::cout << "float: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		swap(a, b);
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
	}
	{
		std::string a = "hello", b = "world";
		std::cout << "string: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		swap(a, b);
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
	}
	std::cout << " ----- MIN -----" << std::endl;
	{
		float a = 1.2, b = 3.33333;
		std::cout << "float: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "return: " << min(a, b);
		put(min(a, b) == a);
	}
	{
		int a = 1, b = 3;
		std::cout << "int: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "return: " << min(a, b);
		put(min(a, b) == a);

	}
	std::cout << " ----- MAX -----" << std::endl;
	{
		float a = 1.2, b = 3.33333;
		std::cout << "float: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "return: " << max(a, b);
		put(max(a, b) == b);
	}
	{
		int a = 1, b = 3;
		std::cout << "int: " << std::endl;
		std::cout << "a=" << a << std::endl;
		std::cout << "b=" << b << std::endl;
		std::cout << "return: " << max(a, b);
		put(max(a, b) == b);

	}

	std::cout << " ----- PROVIDED -----" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}
