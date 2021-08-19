#include <iostream>
#include <string>
#include <locale>  // std::locale, std::toupper

int main(int ac, char **av) 
{
	std::string str; 
	std::locale loc;

	if (ac < 2 && std::cout << '\a')
		return (1);
	for (int x = 1; x<ac; x++) { 
		str = av[x];
		for (int i=0; i<str.length(); ++i)
			std::cout << std::toupper(str[i],loc);
	}
	std::cout << '\n';
	return 0;
}
