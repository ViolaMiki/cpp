#include <iostream>
#include <vector>

using std::vector;
int main()
{
	vector<int> vi(9,8);
	vector<int>::iterator mid = (vi.begin() +  vi.end())/2;
	std::cout << *mid << std::endl;
	return 0;
}
