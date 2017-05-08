#include <iostream>
#include "../list/list.h"
using namespace std;
template <typename T>
void print(T e) {
    cout << e << endl;
}
int main() {
    List<int> list;
    list.insertAsLast(1);
    list.insertAsLast(2);
    list.insertAsLast(3);
    list.insertAsLast(4);
    list.insertAsLast(5);
    list.insertAsLast(6);
    List<int> list1;
    list1.insertAsLast(3);
    list1.insertAsLast(5);
    list1.insertAsLast(7);
    list.merge(list);
    list.traverse( &print );
    return 0;
}
