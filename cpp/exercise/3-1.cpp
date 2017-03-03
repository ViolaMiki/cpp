#include <iostream>

using namespace std;
bool checkTriangle(int a, int b, int c) {
    a *= a;
    b *= b;
    c *= c;
    if (a + b == c || a + c == b || c + b == a){
        return true;
    }
    return false;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (checkTriangle(a, b, c)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

