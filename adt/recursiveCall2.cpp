#include<iostream>

void reverse(int* A, int lo, int hi){
	if(lo < hi){
		std::swap( A[lo], A[hi]);
		reverse(A, lo + 1, hi -1);
	}
}

int main()
{
	const int array_size = 4;
	int array_1[array_size] = {3,4,6,1};
	reverse(array_1, 0 , array_size -1);
	for(int n = 0; n != array_size; ++n){
		std::cout << array_1[n] << std::endl;
	}
	
}
