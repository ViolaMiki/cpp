#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		vector<int> getRow(int rowIndex) {
			vector<vector<int> > res;
			res.reserve( rowIndex );
			vector<vector<int> >::iterator iter;
			for ( int i = 0; i != rowIndex + 1 ; ++i ){
				vector<int> ele(1,1);
				if ( res.empty() ){
					res.push_back(ele);
					iter = res.begin();
				}else{
					for(vector<int>::iterator iter1 = (*iter).begin(); iter1 != (*iter).end() - 1; ++iter1 ){
						ele.push_back(*iter1 + *(iter1 + 1));
					}
					ele.push_back(1);
					res.push_back(ele);
					++iter;
				}
			}
			return res[rowIndex];
		}
};

int main (){
	int i = 2;
	Solution solu;
	vector<int> row = solu.getRow(i);
	for( vector<int>::iterator iter = row.begin(); iter != row.end(); ++iter)
		cout << *iter << endl;
	return 0;
}
