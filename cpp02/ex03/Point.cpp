#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point( float cord_x, float cord_y ) : x(cord_x), y(cord_y) {}

Point::Point( const Point & copy ) : x(copy.x), y(copy.y) {}

Point::~Point( void ) {}

Point & Point::operator=( const Point & obj ) {
	 new (this) Point(obj.get_x().toFloat(), obj.get_y().toFloat());
//	 const_cast<Fixed&>(this->x) = obj.x;
	 return *this;
}

const Fixed & Point::get_x() const { return x; }
const Fixed & Point::get_y() const { return y; }

std::ostream & operator<<( std::ostream & o, const Point & point )
{
	std::cout << "Point: x=";
	std::cout << point.get_x();
	std::cout << " y=";
	std::cout << point.get_y() << std::endl;
	return (o);
}
