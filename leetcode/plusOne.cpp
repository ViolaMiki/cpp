#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		vector<int> plusOne(vector<int>& digits) {
			for (vector<int>::iterator iter = digits.end() - 1; iter != digits.begin() - 1; --iter){
				if ( *iter != 9 ){
					++(*iter);
					break;
				}else{
					*iter = 0;
				}
			}
			if ( digits[0] == 0){
				vector<int> one(1,1);
				for (vector<int>::iterator iter = digits.begin(); iter != digits.end(); ++iter){
					one.push_back(*iter);
				}
				digits = one;

			}
			return digits;
		}
};

int main(){
	vector<int> digits(9,9);
	Solution solu;
	vector<int> one = solu.plusOne(digits);
	for( vector<int>::iterator iter = one.begin(); iter != one.end(); ++iter){
		cout << *iter << endl;
	}

	return 0;
}
