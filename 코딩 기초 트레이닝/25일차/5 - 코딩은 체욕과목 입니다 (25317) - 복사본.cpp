#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 0; num/4 > i; i++)
	{
		std::cout << "long ";
	}

	std::cout << "int";

	return 0;
}