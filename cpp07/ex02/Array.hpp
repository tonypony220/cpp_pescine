#include <iostream>
#include <exception>

#ifndef CLASS_ARRAY
# define CLASS_ARRAY
# define RED      "\033[1;31m"
# define GREEN    "\033[0;32m"
# define RESET    "\033[0;0m"

template <class T>
class Array {

  private:
	  T *ptr;
	  unsigned int len;

  public:
	Array();
	Array( unsigned int );
	const Array & operator=( const Array & );
	Array( const Array & );
	~Array( void );

	T & operator[](unsigned int i);
	unsigned int size(void) const;

};

template <class T>
Array<T>::Array( void ) : ptr(0), len(0) {}

template <class T>
Array<T>::Array( unsigned int n ) : ptr( new T[n] ), len( n ) {}

template <class T>
Array<T>::Array( const Array & copy ) : ptr(0), len(0) { *this = copy; }

template <class T>
const Array<T> & Array<T>::operator=( const Array<T> & other ) {
	if (ptr)
		delete [] ptr;
	ptr = new T[other.size()];
	len = other.size();
	for (unsigned int i = 0; i < other.size(); i++)
		ptr[i] = other.ptr[i];
	return *this;	
}

template <class T>
T & Array<T>::operator[]( unsigned int i ) {
	if (i >= size())
		throw std::logic_error("index out of range");
	return ptr[i];
}

template <class T>
Array<T>::~Array( void ) { delete [] ptr; }

template <class T>
unsigned int Array<T>::size(void) const { return len; }

#endif

