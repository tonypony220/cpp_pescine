#include <iostream>
#include <string>
#include <cerrno>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <float.h>

// not used
bool number_possibly_zero(std::string str) {
	int i = 0;
	while (isblank(str[i]))
		i++;
	return str[i] == '0';
}

void disp_char(double n) {

	std::cout << "char: ";
	if (n > 32 && n < 127)
		std::cout << "'" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void disp_int(double n) {
	std::cout << "int: ";
	if (n != n || (n < -FLT_MAX || n > FLT_MAX) )
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(n) << std::endl;
}

// roundf not fits cause from C+11
void disp_float(double n) {
	if (floor(n) == n) {
		std::cout << std::fixed;
		std::cout << std::setprecision(1);
	}
	std::cout << "float: ";
	std::cout << static_cast<float>(n) << 'f' << std::endl;
}

void disp_double(double n) {
	if (floor(n) == n) {
		std::cout << std::fixed;
		std::cout << std::setprecision(1);
	}
	std::cout << "double: ";
	std::cout << n << std::endl;
}

int main(int argc, char** argv)
{
	double temp;
	if (argc != 2)
		return (1);
	std::string str(argv[1]);
	if (str.length() == 1 && !isdigit(str[0]))
		temp = static_cast<double>(str[0]);
	else
		temp = ::strtod(argv[1], NULL);
	disp_char(temp);
	disp_int(temp);
	disp_float(temp);
	disp_double(temp);
	return (0);
}