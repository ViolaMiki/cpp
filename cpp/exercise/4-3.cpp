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
        double a = _a, b = _b, c = _c;
        cout.precision(2);
        if (_a == 0 && _b == 0 && _c == 0) {
            cout << 5 << endl;
            return;
        }
        if ((_a == 0 && _b == 0 && _c != 0) || (b == 0 && a*c >0) ) {
            cout << 4 << endl;
            return;
        }
        if (_a == 0) {
            cout << 6 << '\n';
            if (c == 0) {
                cout << 0 << endl;
                return;
            }
            cout << -c/b << endl;
            return;
        }

        double d = b*b - 4*a*c;
        if (d > 0) {
            cout << 1 << '\n';
            cout << (-b + sqrt(d))/2*a << ' ' << (-b - sqrt(d))/2*a << endl;
            return;
        }
        if (d == 0) {
            cout << 2 << '\n';
            cout << -b/2*a << endl;
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
