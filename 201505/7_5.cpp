#include <iostream>

using std::cout;
using std::endl;

int compare(int a , int *b){
	if ( a > *b )
		return a;
	else return *b;
}

int main(){
	int a = 3;
	int b = 4;
	int *p = &b;
	cout << compare(a, p) << endl;
}
