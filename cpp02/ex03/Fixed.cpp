#include "Fixed.hpp"

Fixed::Fixed() {
	raw_value = 0;
}	

Fixed::Fixed( int digit ) {
	raw_value = digit << fractional_bits;
}

/* https://ee.sharif.edu/~asic/Tutorials/Fixed-Point.pdf */
Fixed::Fixed( float digit ) {
	digit *= (1 << fractional_bits);
	digit = std::roundf( digit );
	raw_value = static_cast<int>( digit );
}

Fixed::~Fixed( void ) {}	

/* copy constructor */
Fixed::Fixed( const Fixed & original_obj ) {
	raw_value = original_obj.raw_value; //<--- access other private attrs 
}

/* const return object protects from things like this: (v1 += v2) = v3; */
/* https://stackoverflow.com/questions/21778045/c-return-value-reference-const-reference/21778496 */
const Fixed & Fixed::operator=( const Fixed & other ) {
	raw_value = other.raw_value; // <--- access other private attrs 
	return (*this);
}

/* we has const fractional bits(q), so this merging of q's not impolemented */ 

/* int32_t a = 0x1000L;    // q15: a = 0.125 */
/* int32_t b = 0x20000L;   // q20: b = 0.125 */
/* int32_t c = 0;          // q25 */
/* c = (a << 5) + b;       // q20: (a * 2 ^ (20 - 15) + b); c = 0x40000L (0.25 в q20) */
/* c <<= 5;                // q25: c = 0x800000L (0.25 в q25) */

Fixed 		  Fixed::operator+( const Fixed & other ) const {
	Fixed n;
	n.setRawBits( raw_value + other.getRawBits());
	return n;	
}

Fixed 		  Fixed::operator-( const Fixed & other ) const {
	Fixed n;
	n.setRawBits( raw_value - other.getRawBits());
	return n;	
}


Fixed		  Fixed::operator*( const Fixed & other ) const {
	long res = 0;
	Fixed n;
	res = static_cast<long>( raw_value ) * static_cast<long>( other.getRawBits() );
	n.setRawBits( static_cast<int>(res >> fractional_bits) );
	return n;	
}

Fixed		  Fixed::operator/( const Fixed & other ) const {
	long tmp = 0;
	Fixed n;
	tmp = (static_cast<long>( raw_value )) << fractional_bits;
	n.setRawBits( static_cast<int>( tmp / static_cast<long>(other.getRawBits()) ) );
	return n;	
}

bool		  Fixed::operator>( const Fixed & other ) const {
	return raw_value > other.getRawBits();	
}

bool		  Fixed::operator<( const Fixed & other ) const {
	return raw_value < other.getRawBits();	
}

bool		  Fixed::operator<=( const Fixed & other ) const {
	return raw_value <= other.getRawBits();	
}

bool		  Fixed::operator>=( const Fixed & other ) const {
	return raw_value >= other.getRawBits();	
}

bool		  Fixed::operator==( const Fixed & other ) const {
	return raw_value == other.getRawBits();	
}

bool		  Fixed::operator!=( const Fixed & other ) const {
	return raw_value != other.getRawBits();	
}

const Fixed & Fixed::operator++() { 
	raw_value++;
	return *this;		
}

const Fixed & Fixed::operator--() { 
	raw_value--;
	return *this;		
}

Fixed 		  Fixed::operator++(int) {	
	Fixed tmp(*this);
	raw_value++;
	return tmp;
}

Fixed 		  Fixed::operator--(int) {	
	Fixed tmp(*this);
	raw_value--;
	return tmp;
}

const Fixed &  Fixed::min( const Fixed & a , const Fixed & b ) {
	if ( a < b ) 
		return a;
	return b;
}

const Fixed &  Fixed::max( const Fixed & a , const Fixed & b ) {
	if ( a > b ) 
		return a;
	return b;
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
	return raw_value;
}

void  Fixed::setRawBits( int const raw ) {
	raw_value = raw;
}


