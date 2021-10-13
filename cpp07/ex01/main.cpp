#include "iter.hpp"
#include <iostream>

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}

//class Awesome
//{
//public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
//private:
//	int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//std::ostream & operator<<( std::ostream & o, Awesome  & rhs ) { o << rhs.get(); return o; }
//
//template< typename T >
//void print( const T & x ) { std::cout << x << std::endl; return; }
//
//template< typename T >
//void c_print( T & x ) { std::cout << x << std::endl; return; }

int main() {

	{
		int arr[6] = {1, 2, 3, 4, 5, 6 };		
		iter(arr, 6, &disp<int>);
		iter<int>(arr, 6, 0);
		iter<int>(0, 6, &disp);
	}

	{
		double arr[6] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66 };		
		iter(arr, 6, &disp);
//		iter(arr, 6, &incr);
		iter(arr, 6, &disp);
	}

	{
		std::string arr[6] = {"a", "b", "c", "d", "e", "f" };
		iter(arr, 6, &disp);
	}

//	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//	Awesome tab2[5];
//	Awesome const tab3[5];
//
//	iter( tab, 5, c_print );
//	iter( tab2, 5, c_print );
//	iter( tab3, 5, c_print );
//
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//	iter( tab3, 5, print );

}
