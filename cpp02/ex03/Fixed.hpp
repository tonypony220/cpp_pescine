#include <iostream>
#include <cmath>
#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# define FRAC 8	

class Fixed {
  private:
	int raw_value;
	static const int fractional_bits = FRAC;

  public:

	Fixed( int digit );	

	Fixed( float digit );	

	Fixed();	

	Fixed( const Fixed & copy );	

	~Fixed( void );	

	const Fixed & operator=( const Fixed & other ) ;	

	bool 		  operator>(  const Fixed & other ) const ;	
	bool 		  operator>=( const Fixed & other ) const ;	
	bool 		  operator<(  const Fixed & other ) const ;	
	bool 		  operator<=( const Fixed & other ) const ;	
	bool 		  operator==( const Fixed & other ) const ;	
	bool 		  operator!=( const Fixed & other ) const ;	
	
	Fixed		  operator+( const Fixed & other ) const ;
	Fixed 		  operator-( const Fixed & other ) const ;
	Fixed 		  operator*( const Fixed & other ) const ;
	Fixed 		  operator/( const Fixed & other ) const ;
	
	static const Fixed & min( const Fixed & a , const Fixed & b );	
	static const Fixed & max( const Fixed & a , const Fixed & b );	

	/* prefix */ 
	const Fixed & operator++();	
	const Fixed & operator--();	
	/* postfixt */ 
	Fixed 		  operator++( int );	
	Fixed 		  operator--( int );	

	int		getRawBits( void ) const;

	void 	setRawBits( int const raw );

	float 	toFloat( void ) const;

	int 	toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, const Fixed & other );	

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
