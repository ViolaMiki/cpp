#include <iostream>

using namespace std;
bool check(int num) {
    if (num == 2 || num == 3 || num == 5) {
        return true;
    }
    if (num % 2 == 0) {
        check(num/2);
    } else if (num % 3 == 0) {
        check(num/3);
    } else if (num % 5 == 0) {
        check(num/5);
    } else {
        return false;
    }
}
int main() {
    int num;
    cin >> num;
    if (check(num)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}

