#include "Fixed.hpp"

Fixed::Fixed() {
	raw_value = 0;
	std::cout << "Default constructor called" << std::endl;
}	

Fixed::Fixed( int digit ) {
	raw_value = digit << fractional_bits;
}

Fixed::Fixed( float digit ) {
	raw_value = digit;
}

Fixed::~Fixed( void ) {
	std::cout << "destructor called" << std::endl;
}	

Fixed::Fixed( const Fixed & original_obj ) {
	/* raw_value = original_obj.getRawBits(); */
	raw_value = original_obj.raw_value; //<--- access other private attrs 
	std::cout << "Copy constructor called" << std::endl;
}

/* const return object protects from things like this: (v1 += v2) = v3; */
/* https://stackoverflow.com/questions/21778045/c-return-value-reference-const-reference/21778496 */
const Fixed & Fixed::operator=( const Fixed & other ) {
	raw_value = other.raw_value; // <--- access other private attrs 
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

int  Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return raw_value;
}

void  Fixed::setRawBits( int const raw ) {
	raw_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}


