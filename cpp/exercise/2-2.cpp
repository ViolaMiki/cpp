#include <iostream>

using namespace std;
int main() {
    long a;
    cin >> a;
    int i = 0;
    int result = 0;
    while (a >= 1) {
        int num = a%10;
        cout << result << '-' << a << 'i' << i << "num" << num << '\n';
        result = result + (num*(2^i));
        ++i;
        a = a/10;
    }
    cout << result << endl;
}
