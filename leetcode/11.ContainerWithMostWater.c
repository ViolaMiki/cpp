int maxArea(int* height, int heightSize) {
    int max = 0, temp = 0, i = 0, j = heightSize - 1, area = 0;
    while (i != j) {
        temp = height[i] > height[j] ? height[j--] : height[i++];
        area = temp * (j - i + 1);
        if (area > max) {
            max = area;
        }
    }
    return max;
}
