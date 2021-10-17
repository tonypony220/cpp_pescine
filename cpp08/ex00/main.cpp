// find example
#include "easyfind.hpp"
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
#include <list>         // std::list

int main () {
	int myints[] = { 10, 20, 30, 40 };
	std::vector<int> myvector (myints,myints+4);
	std::vector<int>::iterator it;

	it = easyfind (myvector, 30);
	if (it != myvector.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";

	std::vector<int> myvector2;
	for (int count=0; count < 5; ++count)
		myvector2.push_back(count);
	it = easyfind (myvector2, 50);
	if (it != myvector2.end())
		std::cout << "Element found in myvector: " << *it << '\n';
	else
		std::cout << "Element not found in myvector\n";


	std::list<int> myvector3;

	myvector3.push_back(20);
	for (int count=0; count < 4; ++count)
		myvector3.push_back(10);

	std::list<int>::iterator lit;
	lit = easyfind (myvector3, 10);
	if (lit != ++myvector3.begin())
		std::cout << "ERROR" << std::endl;
	else
		std::cout << "OK" << std::endl;

}