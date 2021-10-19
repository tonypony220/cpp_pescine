#include <iostream>
#include <stack>
#include <algorithm>
#pragma once

//https://codereview.stackexchange.com/questions/189380/example-of-adding-stl-iterator-support-to-custom-collection-class
//https://internalpointers.com/post/writing-custom-iterators-modern-cpp

template <class T>
class MutantStack : public std::stack<T> {
	public:
	//	typedef typename std::deque<T>::iterator iterator;
		typedef typename std::stack<T>::container_type::iterator iterator;
	//	typedef typename MutantStack::container_type::iterator iterator;
		iterator  begin( void ) { return MutantStack.container_type.begin(); }
		iterator  end( void )   { return MutantStack.container_type.end(); }
};


//template <class T, class Container = std::deque<T> >
//class MutantStack : public std::stack< T, Container > {
//		Container arr;
//
//	public:
//		MutantStack( void );
//		~MutantStack( void );
//		MutantStack( const MutantStack & copy );
//		MutantStack & operator=( const MutantStack & other );
//		void 						  push( T );
//		T &  						  top( void );
//		void  						  pop( void );
//		typename Container::size_type size( void );
//		bool 						  empty( void );
//
//		typedef typename Container::iterator iterator;
//		typename Container::iterator  begin() { return arr.begin(); }
//		typename Container::iterator  end()   { return arr.end(); }
//};
//
//template <class T, class Container>
//MutantStack<T, Container>::MutantStack( void ) {}
//
//template <class T, class Container>
//MutantStack<T, Container>::~MutantStack( void ) {}
//
//template <class T, class Container>
//MutantStack<T, Container>::MutantStack( const MutantStack<T, Container> & copy) { *this = copy; }
//
//template <class T, class Container>
//void MutantStack<T, Container>::push( T t ) { arr.push_back(t); }
//
//template <class T, class Container>
//void MutantStack<T, Container>::pop( void ) { arr.pop_back(); }
//
//template <class T, class Container>
//T & MutantStack<T, Container>::top( void ) { return arr.back(); }
//
//template <class T, class Container>
//typename Container::size_type MutantStack<T, Container>::size( void ) { return arr.size(); }
//
//template <class T, class Container>
//bool MutantStack<T, Container>::empty( void ) { return arr.empty(); }
//
//template <class T, class Container>
//MutantStack<T, Container> & MutantStack<T, Container>::operator=( const MutantStack<T, Container> & other ){
//	arr = other.arr;
//	return *this;
//}
