#include <iostream>
#include <exception>

#ifndef TEMPLATE_ITER
# define TEMPLATE_ITER
# define RED      "\033[1;31m"
# define GREEN    "\033[0;32m"
# define RESET    "\033[0;0m"

template <class t> 
void disp(const t & obj) {
	std::cout << obj << std::endl;
}
		
//template <class t>
//void incr( t & obj) {
//	obj++;
//}


template <class T>
void iter(const T * arr, size_t len, void (*func)(const T&)) {
	if (!arr || !func)
		return;
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif

