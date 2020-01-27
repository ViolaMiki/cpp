/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare (const void * a, const void * b) {
      return (*(int*)a - *(int*)b);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize) {
    int** rel = (int **)malloc(100000 * sizeof(int *));
    if (numsSize < 4) {
        *returnSize = 0;
        return rel;
    }
    qsort(nums, numsSize, sizeof(int), compare);

    int m, n, sum, index = 0;
    for (int i = 0; i < numsSize - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < numsSize - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            m = j + 1;
            n = numsSize - 1;
            while (m < n) {
                if (m > j + 1 && nums[m] == nums[m - 1]) { ++m; continue; }
                if (n < numsSize - 1 && nums[n] == nums[n + 1]) { --n; continue; }
                sum = nums[i] + nums[j] + nums[m] + nums[n];
                if (sum > target) --n;
                if (sum < target) ++m;
                if (sum == target) {
                    rel[index] = (int *)malloc(4 * sizeof(int));
                    rel[index][0] = nums[i];
                    rel[index][1] = nums[j];
                    rel[index][2] = nums[m];
                    rel[index][3] = nums[n];
                    --n;
                    ++index;
                }
            }
        }
    }
    *returnSize = index;
    return rel;
}

int main() {
    int nums[] ={ -1, 0, 1, 2, -1, -4};
    int *returnSize;
    int **rel = fourSum(nums, 6, 0,  returnSize);
    printf("%d", rel[0][0]);
}
