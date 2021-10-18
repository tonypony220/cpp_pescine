#include <iostream>
#include <stack>
#pragma once

// why use const in copy with that main: "Span sp = Span(5);"
// https://stackoverflow.com/questions/18565167/non-const-lvalue-references
// in short::: just protection from attemption change temp obj
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
