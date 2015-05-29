#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string strIn,strOut;
	while(cin >> strIn){
		for(string::size_type index = 0; index < strIn.size(); ++index)
		{
			if(!ispunct(strIn[index]))
				strOut += strIn[index];
		}
	}
	cout << strOut << endl;
	return 0;
}
