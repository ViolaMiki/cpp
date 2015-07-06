#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
	public:
		int removeElement(vector<int>& nums, int val) {
			sort ( nums.begin(), nums.end() );
			vector<int>::iterator iter;
			 vector<int>::iterator iter1;
			for ( iter = nums.begin(); iter != nums.end(); ++iter ){
				if ( *iter == val )
					break;
			}
			if ( iter != nums.end() )
			{
				for( iter1 = iter + 1; iter1 != nums.end(); ++iter1){
					if ( *iter1 > val )
						break;
				}
				nums.erase( iter, iter1 );
			}

			return nums.size();
		}
};


int main()
{
	vector<int>	vec(1,1);
	vec.push_back(7);
	vec.push_back(1);
	vec.push_back(7);
	vec.push_back(5);
	vec.push_back(11);
	vec.push_back(9);
	Solution solu;
    cout <<	solu.removeElement( vec, 7) << endl;

	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter <<endl;
	}

	return 0;
}
