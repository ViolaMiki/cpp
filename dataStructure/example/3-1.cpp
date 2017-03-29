#include <iostream>
#include "../list/list.h"
using namespace std;
int main() {
    List<int> list;
    list.insertAsLast(1);
    list.insertAsLast(2);
    cout << list[0] << endl;
    cout << list[1] << endl;
}
