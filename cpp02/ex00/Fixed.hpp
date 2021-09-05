#include <iostream>
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed {
  private:
	int digit;
	static const int fractional_bits = 8;

  public:
	Fixed();	
	Fixed( int digit );	

	Fixed & operator=( const Fixed & other );	

	Fixed( const Fixed & copy );	

	~Fixed( void );	

};

#endif
