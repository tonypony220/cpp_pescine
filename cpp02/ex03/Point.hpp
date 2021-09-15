#include "Fixed.hpp"

#ifndef CLASS_POINT_HPP
# define CLASS_POINT_HPP

class Point {
  private:
	  Fixed const x;
	  Fixed const y;

  public:

	Point();	

	Point( float x, float y );	

	Point( const Point & copy );	

	~Point( void );	

	void operator=( const Point & other );	

	const Fixed & get_x() const ;

	const Fixed & get_y() const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point) ;

#endif
