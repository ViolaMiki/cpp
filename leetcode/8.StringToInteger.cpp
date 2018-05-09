class Solution {
public:
    int myAtoi(string str) {
        long long result = 0;
        bool positive = true;
        auto start = str.begin();
        bool hasSpace = false;
        for (auto i = str.begin(); i != str.end(); ++i) {
            if (*i == ' ') {
                if (start != str.begin() || result != 0) {
                    break;
                }
                hasSpace = true;
                continue;
            } else if (hasSpace && start == str.begin()) {
                start = i;
            }

            if (i == start && (*i == '-' || *i == '+')) {
                if (*i == '-') {
                    positive = false;
                }
                continue;
            }
            
            if (*i >= '0' && *i <= '9') {
                result = result*10 + (*i - '0');
                if (result > INT_MAX) {
                    return positive ? INT_MAX : INT_MIN;
                }
            } else {
                break;
            }
        }
        return positive ? result : -result;
    }
};
