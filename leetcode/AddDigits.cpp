#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if ( num < 10){
            return num;
        }
        int sum = 0;
        while ( num > 9 ){
            while ( num > 0 ){
                sum += num%10;
                num = num/10;
            }
            num = sum;
			sum = 0;
        }
	return num;
    }
};

int main(){
	Solution solu;
	int result = solu.addDigits(12333);
	cout << result <<endl;
	return 0;	
}
