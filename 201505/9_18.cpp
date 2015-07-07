#include <iostream>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::deque;

int main()
{
	list<int> list1(10,9);
	deque<int> deque1;
	deque<int> deque2;
	if(list1.size()%2 == 1){
		for(list<int>::iterator iter = list1.begin(); iter != list1.end(); ++iter)
			deque1.push_back(*iter);
		for(deque<int>::iterator iter1 = deque1.begin(); iter1 != deque1.end(); ++iter1)
			cout << *iter1;
	}else{
		for(list<int>::iterator iter = list1.begin(); iter != list1.end(); ++iter)
			deque2.push_back(*iter);
		for(deque<int>::iterator iter1 = deque2.begin(); iter1 != deque2.end(); ++iter1)
			cout << *iter1;
	}
	cout <<endl;
	return 0;
}
