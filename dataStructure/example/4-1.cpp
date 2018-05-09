#include <iostream>
#include "../stack/stack.h"
#include "../stack/convert.h"

using namespace std;

template <typename T>
void print(T e) {
    cout << e << endl;
}

int main() {
    Stack<char> stack;
    convert_recursion(stack, 100, 16);
    stack.traverse(&print);
}
