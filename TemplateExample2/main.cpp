// Examples modified from http://users.cis.fiu.edu/~weiss/Deltoid/vcstl/templates

#include <iostream>
#include "stack.h"

template <class T>
T Large(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	std::cout << "Integers 10 and 20: " << Large(10, 20) << " is larger." << std::endl;
	std::cout << "Doubles 10.0 and 20.0: " << Large(20.0, 10.0) << " is larger." << std::endl;
	std::cout << "Floats 10.0 and 20.0: " << Large(10.0f, 20.0f) << " is larger." << std::endl;
	std::cout << std::endl << std::endl;
	
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
