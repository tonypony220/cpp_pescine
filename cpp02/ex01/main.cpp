# include "Fixed.hpp"
#define FRAC 8	

int main() {
	//Fixed a;
	float a = 0.15625;
    union ieee754_float *dl;
    dl = (union ieee754_float*)&a;
	
	std::cout << dl->ieee.exponent - 127 << "\n";
	dl->ieee.exponent = 0;
	dl->ieee.negative = 0;
	int d = *((int*)&dl->f);
	d = d >> 1;
	d |= 1 << 31;	
	d = d >> (31 - FRAC + dl->ieee.exponent - 127);
			
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
