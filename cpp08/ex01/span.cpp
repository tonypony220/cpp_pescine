#include "span.hpp"

Span::Span( unsigned int i ) : size(i) {}
Span::~Span(void) {}
Span::Span( Span & copy ) { *this = copy; }

Span & 	 Span::operator=( Span & other ) {
	size = other.getSize();
	arr = other.getArr();
	return *this;
}
unsigned int	&   Span::getSize( void ) { return size; }
std::vector<int> &  Span::getArr(  void ) { return arr; }

void 			 Span::addNumber( int num ) {
	if (arr.size() >= getSize())
		throw std::logic_error("not able to add: store size been exceeded");
	arr.push_back( num );
}

//https://stackoverflow.com/questions/18956740/how-to-find-the-largest-difference-in-an-array
int 			 Span::longestSpan() {
	if (arr.size() == 0)
		return 0;

	int   max = 0;
	int   result = 0;
	long  tmpResult;

	std::vector<int>::iterator it(getArr().begin());

//	std::cout << getArr().begin() << std::endl;
//	std::cout << arr.begin() << std::endl;
	std::cout << "size(" << *getArr().begin() << ")" << std::endl;
	std::cout << "size(" << *arr.end()  	 << ")" << std::endl;


	for (; it != getArr().end(); it++) {
		if ( *it > max )
			max = *it;

		tmpResult = max - *it;
		if(tmpResult > result)
			result = tmpResult;
	}
	return result;
}

int 			 Span::shortestSpan( void ) { return 0; }
