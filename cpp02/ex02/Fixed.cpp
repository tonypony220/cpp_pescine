#include "Fixed.hpp"

Fixed::Fixed() {
	raw_value = 0;
	std::cout << "Default constructor called" << std::endl;
}	

Fixed::Fixed( int digit ) {
	std::cout << "Int constructor called" << std::endl;
	raw_value = digit << fractional_bits;
}

/* https://ee.sharif.edu/~asic/Tutorials/Fixed-Point.pdf */
Fixed::Fixed( float digit ) {
	std::cout << "Float constructor called" << std::endl;
	digit *= (1 << fractional_bits);
	digit = std::roundf(digit);
	raw_value = static_cast<int>(digit);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
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

/* we has const fractional bits(q), so this merging of q's not impolemented */ 

/* int32_t a = 0x1000L;    // q15: a = 0.125 */
/* int32_t b = 0x20000L;   // q20: b = 0.125 */
/* int32_t c = 0;          // q25 */
/* c = (a << 5) + b;       // q20: (a * 2 ^ (20 - 15) + b); c = 0x40000L (0.25 в q20) */
/* c <<= 5;                // q25: c = 0x800000L (0.25 в q25) */

Fixed 		  Fixed::operator+( const Fixed & other ) {
	return Fixed( raw_value + other.getRawBits());	
}

Fixed 		  Fixed::operator-( const Fixed & other ) {
	return Fixed( raw_value - other.getRawBits());	
}



float Fixed::toFloat( void ) const {
	float digit = static_cast<float>(raw_value);
	return digit / (1 << fractional_bits);
}

int Fixed::toInt( void ) const {
	return raw_value >> fractional_bits;
}

std::ostream & operator<<( std::ostream & o, const Fixed & fixed ) {
	o << fixed.toFloat();
	return (o);
}	

int  Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return raw_value;
}

void  Fixed::setRawBits( int const raw ) {
	raw_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}


