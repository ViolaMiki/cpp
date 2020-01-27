int divide(int dividend, int divisor) {
    long count = 1, result = 0;
    int state = 0;
    if (dividend == 0) return 0;
        
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0)) state = 1;

    long dividendT = labs(dividend), divisorT = labs(divisor), temp = divisorT;
    
    if ((dividend == INT_MAX || dividend == INT_MIN) && divisorT == 1) return state ? INT_MAX : INT_MIN;
 
    while ((temp << 1) < dividendT) {
        temp <<= 1;
        count <<= 1;
    }
    
    
    while (divisorT <= dividendT) {
        result += count;
        dividendT -= temp;
        
        while (temp > dividendT) {
            temp >>= 1;
            count >>= 1;
        }
    }

    return state ? result : -result;
}
