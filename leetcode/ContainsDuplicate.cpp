#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			if( nums.size() == 0)
				return false;
			sort( nums.begin(), nums.end());
			vector<int>::iterator one = nums.begin();
			for ( vector<int>::iterator two = nums.begin() + 1; two != nums.end(); ++two ){
				if( *one == *two ){
					return true;
				}else{
					one = two;
				}
			}		        
			return false;
		}
};

int main(){
	vector<int> nums(1,1);
	nums.push_back(9);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(7);
	nums.push_back(5);
	nums.push_back(2);
	Solution solu;
	bool a = solu.containsDuplicate(nums);
	cout << a << endl;
}
