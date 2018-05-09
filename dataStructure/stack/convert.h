#pragma once
#include "./stack.h"

void convert(Stack<char>& S, int n, int base) {
  static char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  do {
    int num = n%base;
    S.push(digit[num]);
  } while ((n = n/base) > 0);
}

void convert_recursion(Stack<char>& S, int n, int base) {
  static char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  if (n > 0) {
    convert_recursion(S, n/base, base);
    S.push(digit[n%base]);
  }
}
