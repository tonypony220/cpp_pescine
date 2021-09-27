#include <iostream>
#include <string>
#include <cerrno>
#include <sstream>

int main() {
	char* num = "0.5f";
	double temp = ::strtof(num, NULL);
	std::cout << errno << std::endl;
	std::cout << temp << std::endl;

	double number;
    std::stringstream ss;
    ss << num;
    ss >> number;
	std::cout << number << std::endl;
    /* return number; */
}
