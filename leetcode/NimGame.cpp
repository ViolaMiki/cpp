#include <iostream>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
	return n%4?true:false;
    }
};

int main(){
    Solution solu;
    bool num = solu.canWinNim(3);
    cout << num << endl;
    return 0;
}
