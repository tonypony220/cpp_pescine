#include <iostream>
#include <exception>

#ifndef TEMPLATE_WHATEVER
# define TEMPLATE_WHATEVER
# define RED      "\033[1;31m"
# define GREEN    "\033[0;32m"
# define RESET    "\033[0;0m"

template <class T>
void swap (T & a, T & b) {
	T tmp;
	tmp = b;
	b = a;
	a = tmp;
}

template <class T>
T & min (T & a, T & b) {
	if (a < b)
		return a;
	return b;
}

template <class T>
T & max (T & a, T & b) {
	if (a > b)
		return a;
	return b;
}

#endif

