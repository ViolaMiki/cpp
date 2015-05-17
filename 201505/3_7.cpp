#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string s1, s2;
	string::size_type size1, size2;
	cin >> s1 >> s2;
	size1 = s1.size();
	size2 = s2.size();
	if(size1 > size2)
		cout << s1 << endl;
	else if (size1 == size2)
		cout << "相等" << endl;
	else
		cout << s2 << endl;
}
