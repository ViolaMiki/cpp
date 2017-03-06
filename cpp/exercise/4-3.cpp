/* students please write your program here */

#include <iostream>
#include <cmath>
using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c):_a(a),_b(b),_c(c){
    }
    void solve(){
        cout.precision(2);
        if (_a == _b == _c == 0) {
            cout << 5 << endl;
        }
        if (_a == _b == 0 && _c != 0) {
            cout << 4 << endl;
        }
        if (_a == 0) {
            cout << 6 << '\n';
            cout << -_c/_b << endl;
        }

        float d = _b*_b - 4_a_c;
        if (d > 0) {
            cout << 1 << '\n';
            cout << (-_b + sqrt(d))/2*_a
        }
    }
};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
}
