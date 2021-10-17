#include <iostream>
#include <algorithm>
#pragma once

//  template< class InputIt, class T >
//  InputIt find( InputIt first, InputIt last, const T& value );

// typename usage
// https://stackoverflow.com/questions/11275444/c-template-typename-iterator
//In list<tNode<T>*>::iterator, you have a dependant name, that is, a name that depends on a template parameter.
//As such, the compiler can't inspect list<tNode<T>*> (it doesn't have its definition at this point) and so it doesn't know whether list<tNode<T>*>::iterator is either a static field or a type.
//In such a situation, the compiler assumes that it is a field, so in your case it yields a syntax error. To solve the issue, just tell the compiler that it is a type by putting a typename ahead of the declaration:

template <class T>
typename T::iterator easyfind (T & iterable, int num) {
	return find( iterable.begin(), iterable.end(), num );
}

