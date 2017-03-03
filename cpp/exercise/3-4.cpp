#include <iostream>

using namespace std;
long fibonacci(int num) {
    long numA = 1;
    long numB = 1;
    if (num == 0) {
        return 1;
    }
    if (num == 1) {
        return 1;
    }
    for (int i = num - 2; i >= 0; --i) {
        long temp = numA;
        numA = numB;
        numB += temp;
    }
    return numB;
}

int main() {
    int num;
    cin >> num;
    cout << fibonacci(num) << endl;
}
