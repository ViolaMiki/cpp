#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

#define max 100

class Solution {
	public:
		vector<string> summaryRanges(vector<int>& nums) {
		    vector<string> range(0);
			if( nums.size() == 0 ){
				return range;
			}
			vector<int>::iterator iter = nums.end() - 1;
			if( *iter == -1 ){
				nums.push_back(2);
			}else{
				nums.push_back(0);												        }
			iter = nums.begin();
			for (vector<int>::iterator iter1 = nums.begin(); iter1 != nums.end() - 1; ++iter1){
				if( *iter1 + 1 != *(iter1 + 1) ){
					string rangeString = (iter == iter1)?(to_string( *iter) ):(to_string(*iter)+"->"+to_string(*iter1));
					range.push_back(rangeString);
					iter = iter1 + 1;
				}
			}
			return range;
	    }

		string to_string(int n)
		{
			stringstream ss;
			ss << n;
			return ss.str();
		}
};

int main(){
	vector<int> nums(1,-1);
	Solution solu;
	vector<string> range = solu.summaryRanges(nums);
	for( vector<string>::iterator iter = range.begin(); iter != range.end(); ++iter){
		cout << *iter << endl;
		cout << "abab" << endl;
	}
	return 0;

}
