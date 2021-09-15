#include "Fixed.hpp"

#ifndef CLASS_POINT_HPP
# define CLASS_POINT_HPP

class Point {
  private:
	  Fixed x const;
	  Fixed y const;

  public:

	Point();	

	Point( float x, float y );	

	Point( const Point & copy );	

	~Point( void );	

	const Point & operator=( const Point & other );	
};

#endif
