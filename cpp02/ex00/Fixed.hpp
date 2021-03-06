#include <iostream>
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed {
  private:
	int raw_value;
	static const int fractional_bits = 8;

  public:
	Fixed();	

	const Fixed & operator=( const Fixed & other );	

	Fixed( const Fixed & copy );	

	~Fixed( void );	

	int getRawBits( void ) const;

	void setRawBits( int const raw );

};

#endif
