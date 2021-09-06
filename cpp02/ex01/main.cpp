# include "Fixed.hpp"
#define FRAC 8	

void put_bin( int raw , int size ) {
	int bit; 
	for (int i = size - 1; 0 <= i ; i--) {
		bit = (int)((bool)(raw & 1 << i) && (bool)1);
		std::cout << bit;
	}
	std::cout << std::endl;
}

int main() {
	//Fixed a;
	float a = 0.15625;
    union ieee754_float *dl;
	int d;
    dl = (union ieee754_float*)&a;
	
	d = *((int*)&dl->f);
	put_bin( d, 32 );
	std::cout << dl->ieee.exponent - 127 << "\n";
	int exp = dl->ieee.exponent - 127;
	dl->ieee.exponent = 0;
	dl->ieee.negative = 0;
	d = *((int*)&dl->f);
	put_bin( d, 32 );
	//d = d >> 1;
	d |= 1 << 23;	
	put_bin( d, 32 );	
	int shift = (23 - FRAC - exp);
	std::cout << "shitf:" << shift  << std::endl; 
	d = d >> shift;
//	put_bin( 32, 32 );
	put_bin( d, 32 );
			
	std::cout << (1 / a - roundf(a)) << "\n";
}

//
//int main( void ) {
//	Fixed a;
//	Fixed b( a );
//	Fixed c;
//	c = b;
//	std::cout << a.getRawBits() << std::endl;
//	std::cout << b.getRawBits() << std::endl;
//	std::cout << c.getRawBits() << std::endl;
//	return 0;
//}
