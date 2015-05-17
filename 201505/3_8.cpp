#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str,str1;
	while (cin >> str)
		str1 += " " + str;
	cout << str1 << endl;
	return 0;
}
