int count(*nums, size) {
    int i = 0, m = 0, n = size - 1;
    if (size >= 3) {
        int min = nums[m] > nums[n] ? nums[n] : nums[m];
        i = min * (n - m -1);
        for (int j = 1; j < n; ++j) {
            i -= nums[j];
        }
    } 
    return i;
}

int trap(int* height, int heightSize) {
    int** temp = (int **)malloc(sizeof(int *) * 10000);
    int m = 0, n = 0, changed = 0, rel = 0;
    for (int i = 0; i < heightSize; ++i) {
        if (changed == 1 && height[i] > height[i + 1])
        {
            rel += count(temp[m++], n);
            n = 0;
            change = 0;
        }
        if (n == 0) {
            if (height[i] > height[i + 1]) {
                temp[m] = (int *)malloc(size(int) * heightSize);
                temp[m][n++] = height[i];
            }
        } else {
            temp[m][n++] = height[i];
            if (height[i] < height[i + 1]) changed = 1;
        }

    }
    return rel;
}
