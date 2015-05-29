#include <iostream>
int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;
	sum = 0;
	int num = 50;
	while (num <= 100)
	{
		sum += num;
		++num;
	}
	std::cout << sum << std::endl;
}
