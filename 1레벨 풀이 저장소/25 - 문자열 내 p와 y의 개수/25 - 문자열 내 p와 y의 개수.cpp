#include <iostream>
#include <cstring>

int main()
{
	char arr[5][15];
	int maxLength = 0;

	for (int i = 0; 5 > i; i++)
		std::cin.getline(arr[i], 16);

	for (int i = 0; 15 > i; i++)
	{
		for (int j = 0; 5 > j; j++)
		{
			if (strlen(arr[j]) <= i)
			{
				continue;
			}
			else
				std::cout << arr[j][i];
		}
	}

	return 0;
}