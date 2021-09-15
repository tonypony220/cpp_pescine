#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point( float cord_x, float cord_y ) : x(cord_x), y(cord_y) {}

Point::Point( const Point & copy ) : x(copy.x), y(copy.y) {}

Point::~Point( void ) {}

void Point::operator=( const Point & ) {}

const Fixed & Point::get_x() const {
	return x;
}

const Fixed & Point::get_y() const {
	return y;
}

