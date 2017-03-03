#include <iostream>
#include <math.h>

using namespace std;
int main() {
    long a;
    cin >> a;
    int i = 0;
    int result = 0;
    while (a >= 1) {
        int num = a%10;
        result += num*pow(2,i++);
        a = a/10;
    }
    cout << result << endl;
}
