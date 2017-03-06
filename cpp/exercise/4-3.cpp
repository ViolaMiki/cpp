/* students please write your program here */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c):_a(a),_b(b),_c(c){
    }
    void solve(){
        cout.precision(2);
        if (_a == 0 && _b == 0 && _c == 0) {
            cout << 5 << endl;
            return;
        }
        if (_a == 0 && _b == 0 && _c != 0) {
            cout << 4 << endl;
            return;
        }
        if (_a == 0) {
            cout << 6 << '\n';
            float a1 = (-_c)/_b;
            cout << a1 << endl;
            return;
        }

        float d = _b*_b - 4*_a*_c;
        if (d > 0) {
            cout << 1 << '\n';
            cout << (-_b + sqrt(d))/2*_a << ' ' << (-_b - sqrt(d))/2*_a << endl;
            return;
        }
        if (d = 0) {
            cout << 2 << '\n';
            cout << -_b/2*_a << endl;
            return;
        }
        if (d < 0) {
            cout << 3 << endl;
            return;
        }
    }
};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
}
