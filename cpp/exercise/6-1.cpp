#include <iostream>

using namespace std;
int main() {
    int num;
    cin >> num;
    long arr[num];
    long *p = arr;
    long point = num;
    while (point--) {
        cin >> *(p++);
    }
    long sum[num];
    long max_num = 0;
    long *sum_p = sum;
    *sum_p = 0;
    p = arr;
    point = num;
    while (point--) {
        if (*p > 0) {
            *sum_p += *p;
        } else {
            *(++sum_p) = 0; 
            if (*p > max_num) 
                max_num = *p;
        }
        ++p;
    }
    sum_p = sum;
    long result = 0;
    while (num--) {
        if (*sum_p == 0) {
            if (result == 0) {
                result = max_num;break;
            } else {
                break;
            }
        } else {
            if (*sum_p > result) {
                result = *sum_p;
            }
        }
        ++sum_p;
    }
    cout << result << endl;
}
