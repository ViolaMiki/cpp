#include<iostream>

int sum( int A[], int n)
{
	if( 1 > n){
		return 0;
	}else{
		return sum(A, n-1) + A[n-1];
	}
}

int main()
{
	const int array_size = 9;
	int mArray[array_size] = {0,1,2,3,4,5,6,7,8};
	int sumNub = sum(mArray, array_size);
	std::cout << sumNub << std::endl;
}
