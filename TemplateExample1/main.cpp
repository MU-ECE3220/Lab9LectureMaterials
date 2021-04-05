// Examples modified from http://users.cis.fiu.edu/~weiss/Deltoid/vcstl/templates

#include <iostream>
#include "stack.h"

int main()
{
	Stack<float> fs(5);
	float f = 1.1;
	std::cout << "Pushing elements onto fs" << std::endl;
	while (fs.push(f))
	{
		std::cout << f << ' ';
		f += 1.1;
	}
	std::cout << std::endl << "Stack Full." << std::endl
	          << std::endl << "Popping elements from fs" << std::endl;

	while (fs.pop(f))
		std::cout << f << ' ';
	std::cout << std::endl << "Stack Empty" << std::endl;
	std::cout << std::endl;

	Stack<int> is;
	int i = 1.1;
	std::cout << "Pushing elements onto is" << std::endl;
	while (is.push(i))
	{
		std::cout << i << ' ';
		i += 1;
	}
	std::cout << std::endl << "Stack Full" << std::endl
	          << std::endl << "Popping elements from is" << std::endl;
	while (is.pop(i))
			std::cout << i << ' ';
	std::cout << std::endl << "Stack Empty" << std::endl;

    return 0;
}
