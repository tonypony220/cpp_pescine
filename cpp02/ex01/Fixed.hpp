#include <iostream>
#include <cmath>
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed {
  private:
	int raw_value;
	static const int fractional_bits = 8;

  public:

	Fixed( int digit );	

	Fixed( float digit );	

	Fixed();	

	const Fixed & operator=( const Fixed & other );	

	Fixed( const Fixed & copy );	

	~Fixed( void );	

	int getRawBits( void ) const;

	void setRawBits( int const raw );

};

union ieee754_float {
	float f;
	struct my_float {
		/* unsigned int negative:1; */
		/* unsigned int exponent:8; */
		/* unsigned int mantissa:23; */
		unsigned int mantissa:23;
		unsigned int exponent:8;
		unsigned int negative:1;
	} ieee ;
};

#endif
