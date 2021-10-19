#include <iostream>
#include <stack>
#pragma once

//https://codereview.stackexchange.com/questions/189380/example-of-adding-stl-iterator-support-to-custom-collection-class
//https://internalpointers.com/post/writing-custom-iterators-modern-cpp
template <class T>
class MutantStack : public std::stack<T> {

//	private:
//		unsigned int	 size;
//		std::vector<int> arr;
//	public:
//		Span( unsigned int );
//		Span( const Span & copy );
//		~Span( void );
//		Span & operator=( const Span & other );
//
//		unsigned int	 getSize( void ) const ;
//		std::vector<int> getArr( void )  const ;
//		int				 getSpan( bool ) ;
//		int  			 shortestSpan( void );
//		int  			 longestSpan( void ) ;
//		void 			 addNumber( int );
//		void 			 addNumbers( std::vector<int>::iterator & ,
//									 std::vector<int>::iterator & ) ;
};
