// #include <stdio.h>

int reverse(int x) {
    long result;
    while(x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    if (result > INT_MAX || result < INT_MIN) {
        return 0
    }
    return result;
}

// int main() {
//    int a = reverse(123);
//    printf("%d", a);
//}
