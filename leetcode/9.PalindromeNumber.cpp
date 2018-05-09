class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }

            if (x == 0) {
                return true;
            }
            int m = x;
            long long result = 0;
            while(m > 0) {
                result = result * 10 + m % 10;
                m /= 10;
            }
            return result == x;
        }
};
