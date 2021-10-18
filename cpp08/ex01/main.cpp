#include "span.hpp"
# define RED      "\033[1;31m"
# define GREEN    "\033[0;32m"
# define RESET    "\033[0;0m"

void put( bool x) {
	(x && (std::cout << GREEN"OK!"RESET << std::endl)) || (std::cout << RED"FAIL!"RESET << std::endl);
}

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(2);
		sp.addNumber(17);
		sp.addNumber(4);
		sp.addNumber(11);

		int expected_min = 2;
		int expected_max = 15;

		int min = sp.shortestSpan(), max = sp.longestSpan();
		std::cout << "expected min: " << expected_min << " got: " << min;
		put(min == expected_min);
		std::cout << "expected max: " << expected_max << " got: " << max;
		put(max == expected_max);

		try { sp.addNumber(123); }
		catch (std::exception & e) { std::cout << e.what() << std::endl ;}
	}

	{
		Span sp = Span(5);
		sp.addNumber(0);
		sp.addNumber(200000);
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(0);

		int expected_min = 0;
		int expected_max = 200000;

		int min = sp.shortestSpan(), max = sp.longestSpan();
		std::cout << "expected min: " << expected_min << " got: " << min;
		put(min == expected_min);
		std::cout << "expected max: " << expected_max << " got: " << max;
		put(max == expected_max);

	}
	{
		std::cout << "Iterators" << std::endl;
		int num = 10000;
		std::vector<int> v;
		for (int i = -5000; i <= 5000; i++)
			v.push_back(i);
		Span sp(num + 1);
		sp.addNumbers(v.begin(), v.end());

		int expected_min = 0;
		int expected_max = num;

		int min = sp.shortestSpan(), max = sp.longestSpan();
		std::cout << "expected min: " << expected_min << " got: " << min;
		put(min == expected_min);
		std::cout << "expected max: " << expected_max << " got: " << max;
		put(max == expected_max);

	}
}