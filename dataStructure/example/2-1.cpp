#include <iostream>
#include "../vector/vector.h"
using namespace std;
template <typename T>
void print(T e) {
    cout << e << endl;
}
int main() {
    int a[8] = {0, 1, 1, 3, 4, 5, 5, 7};
    Vector<int> v2(a, 8);
    v2.uniquify();
    v2.traverse(&print);
    cout << v2.size() << endl;
    return 0;
}
