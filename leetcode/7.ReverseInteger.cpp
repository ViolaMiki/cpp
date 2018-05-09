class Solution {
    public: 
        int reverse(int x) {
            int m = x;
            int negative = false;
            int result = 0;
            if (x < 0) {
                negative = true;
            }

             while (m) {
                // 乘法溢出检测检测
                int temp = result * 10;
                if (temp / 10 !=  result) {
                    return 0;
                }

                // 加减溢出判断符号位
                result = temp + m%10;
                if (result != 0 &&  !((result > 0) ^ negative)) {
                    return 0;
                }
                m /= 10;
            }
            return result;
        }
};
