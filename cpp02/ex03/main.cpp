# include "Fixed.hpp"
# include "Point.hpp"

int main( void ) {

	Point a(0.0,  0.0);
	Point b(0.0, 40.0);
	Point c(40.0, 0.0);
	Point p(2.0, 2.0);
	std::cout << bsp(a, b, c, p) << std::endl;
	Point f(  0.0,   0.0);
	Point i(  0.0,  40.0);
	Point j( 40.0,   0.0);
	Point g(200.0, 100.0);
	std::cout << bsp(f, i, j, g) << std::endl;
	{
		Point a(0.0,  0.0);
		Point b(0.0, 40.0);
		Point c(40.0, 0.0);
		Point p(-2.0, 2.0);
		std::cout << bsp(a, b, c, p) << std::endl;
	}
	{
		Point a(0.0,  0.0);
		Point b(0.0, 40.0);
		Point c(-40.0, 0.0);
		Point p(-2.0, 2.0);
		std::cout << bsp(a, b, c, p) << std::endl;
	}
	return 0;
}

