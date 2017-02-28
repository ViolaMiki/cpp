#include <iostream>

using namespace std;
int main() {
    int length;
    cin >> length;
    int min;
    int max;
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        int num;
        cin >> num;
        if (i == 0)
            min = max = num; 
        else {
            if (num < min)
                min = num;
            if (num > max)
                max = num;
        }
        sum += num;
    }
    cout << sum << ' ' 
         << min << ' '
         << max << ' ' << endl;
    return 0;
}
