#include "mutantstack.hpp"
# define RED      "\033[1;31m"
# define GREEN    "\033[0;32m"
# define RESET    "\033[0;0m"

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
//		MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
//		++it;
//		--it;
//		while (it != ite) {
//			std::cout << *it << std::endl;
//			++it; }
//		std::stack<int> s(mstack); return 0;
	}
}