#include "span.hpp"

Span::Span( unsigned int i ) : size(i) {}
Span::~Span(void) {}
Span::Span( const Span & copy ) : size(copy.getSize()), arr(copy.getArr()) {}

Span & 	 		 Span::operator=( const Span & other ) {
	size = other.getSize();
	arr = other.getArr();
	return *this;
}
unsigned int     Span::getSize( void ) const { return size; }
std::vector<int> Span::getArr(  void ) const { return arr; }
int 			 Span::longestSpan() { return getSpan(true); }
int 			 Span::shortestSpan( void ) { return getSpan(false); }

void 			 Span::addNumber( int num ) {
	if (arr.size() >= getSize())
		throw std::logic_error("not able to add: store size been exceeded");
//	std::cout << "added: " << num << std::endl;
	arr.push_back( num );
}


void 			 Span::addNumbers( std::vector<int>::iterator begin,
								   std::vector<int>::iterator end ) {
	for (; begin != end; begin++)
		addNumber(*begin);
}

int				Span::getSpan( bool longest ) {
	if (arr.size() == 0)
		return 0;

	std::vector<int>::iterator it(arr.begin());

	int   max =  *it;
	int   min =  *it;
	int   min2 = *it;
	for (; it != arr.end(); it++) {
		if (*it > max )
			max = *it;
		if (*it < min )
			min = *it;
		else if (*it < min2 )
			min2 = *it;
	}
//	std::cout << "\tMAX: "  << max  << std::endl;
//	std::cout << "\tMIN: "  << min  << std::endl;
//	std::cout << "\tMIN2: " << min2 << std::endl;
	if (longest)
		return abs(max - min);
	return abs(min - min2);
}

