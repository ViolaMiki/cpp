#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
    //构造函数
    Integer(int num);
    //计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b);
};
Integer::Integer(int num):_num(num) {}
int Integer::gcd(Integer b) {
    int temp = 0;
    if (_num < b._num) 
        temp = _num;
    else
        temp = b._num;
    for(int i = temp; i >= 0; --i) {
        if(_num % i == 0 && b._num % i == 0) {
            return i;
        }
    }
    return 0;
}
int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}
