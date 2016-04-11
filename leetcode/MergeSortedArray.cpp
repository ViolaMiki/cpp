#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		
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
    solu.merge(vec);
    for ( vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter ){
        cout << *iter << endl;
    }
    return 0;
}
