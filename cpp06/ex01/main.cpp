#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main( void ) {
	Data *p = new Data();
	uintptr_t u;

	std::cout << p << std::endl;
	u = serialize(p);
	std::cout << u << std::endl;

	Data *l = deserialize(u);
	std::cout << l << std::endl;

	delete p;

}
