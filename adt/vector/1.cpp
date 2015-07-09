#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> myVector;
	vector<int>::iterator myIterator = myVector.begin();
	myVector.insert(myIterator,0,2);
	for(myIterator = myVector.begin(); myIterator != myVector.end(); ++myIterator)
		cout << *myIterator << endl;
	return 0;
}
