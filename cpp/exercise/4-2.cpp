/* students please write your program here */

#include <iostream>
using namespace std;
 
class Integer{
private:
    int _num;
//getLength()函数获取_num长度
    int getLength(){
    }
public:
//Integer类构造函数
    Integer(int num):_num(num){
    }
//反转_num
    int inversed(){
        int num = 0;
        do {
            int single = _num%10;
            num = num * 10 + single;
        } while ((_num /= 10) > 0);
        return num;
    }
};
 
int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
}
