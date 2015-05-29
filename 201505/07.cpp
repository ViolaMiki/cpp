#include <iostream>

int main(){
	int a[] = {2,4,6,8,10};
	int *ip = a[3];
//	int i = *(a + 4);
	std::cout << *ip << std::endl;
	return 0;
}
