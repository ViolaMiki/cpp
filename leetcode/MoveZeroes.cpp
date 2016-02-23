#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator iter = nums.begin();
        while ( iter != nums.end() && *iter != 0 ){
            ++iter;
        }
        if( iter == nums.end() ){
            return;
        } else {
            vector<int>::iterator iter1 = iter + 1;
            while( iter1 != nums.end() ){
                if( *iter1 == 0 ){
                    ++iter1;
                } else {
                    int tmp = *iter;
                    *iter = *iter1;
                    *iter1 = tmp;
                    ++iter;
                    ++iter1;
                }
            }
        }
    }
};

int main () {
    Solution solu;
    vector<int>	vec(1,0);
	vec.push_back(1);
	vec.push_back(0);
	vec.push_back(3);
	vec.push_back(12);
	//vec.push_back();
	//vec.push_back(9);
    for ( vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter ){
        cout << *iter << endl;
    }
    solu.moveZeroes(vec);
    for ( vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter ){
        cout << *iter << endl;
    }
    return 0;
}
