#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		vector<int> removeDuplicates(vector<int>& nums) {
			if( nums.size() == 0)
				return nums;
			vector<int>::iterator one = nums.begin();
			vector<int> newNums(1,*one);
			for( vector<int>::iterator two = nums.begin() + 1; two != nums.end(); ++two){
				if( *one != *two ){
					one = two;
					newNums.push_back( *one );
				}
			}
			return newNums;
		}
};

int main(){
	vector<int> nums(1,1);
	nums.push_back(1);
	nums.push_back(2);
	Solution solu;
	vector<int> newNums = solu.removeDuplicates( nums );
	for ( vector<int>::iterator iter = newNums.begin(); iter != newNums.end(); ++iter)
		cout << *iter << endl;
	return 0;
}
