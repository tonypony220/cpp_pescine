#include <iostream>
#include <vector>
#pragma once

class Span {
	private:
		unsigned int size;
		std::vector<int> arr;
	public:
		Span( unsigned int );
		Span( Span & copy );
		~Span( void );
		Span & operator=( Span & other );

		unsigned int &	 getSize( void );
		std::vector<int> & getArr( void );

		void addNumber( int );
		int shortestSpan( void );
		int longestSpan( void ) ;
};
