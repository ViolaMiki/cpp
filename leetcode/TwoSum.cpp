#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

/*
Given an array of integers, find two numbers such that they add up to a specific target number.
 
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 
 You may assume that each input would have exactly one solution.
 
Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
 */

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			vector<int> index;
			int i = 1;
			if ( !nums.empty() )
			{
				for (vector<int>::iterator iter = nums.begin(); iter != nums.end() - 1 && index.empty(); ++iter)
				{
					int j = i + 1;
					for (vector<int>::iterator iter1 = iter + 1; iter1 != nums.end(); ++iter1 )
					{
						if( (*iter + *iter1 ) == target )
						{
							index.push_back( i );
							index.push_back( j );
							break;
						}
						++j;
					}
					++i;
				}
			}
			return index;
		}
};

int main()
{
	Solution so;
	vector<int> nums( 0 );
	nums.push_back( 4 );
	nums.push_back( 3 );
	nums.push_back( 0 );
	vector<int> index = so.twoSum( nums, 0);
	for(vector<int>::iterator iter = index.begin(); iter != index.end(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;

}
