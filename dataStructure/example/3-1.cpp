#include <iostream>
#include "../list/list.h"
using namespace std;
int main() {
    List<int> l();
    l->insertAsLast(1);
    l->insertAsLast(2);
    cout << l[0] << endl;
    cout << l[1] << endl;
}
