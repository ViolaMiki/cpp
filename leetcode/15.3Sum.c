#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare (const void * a, const void * b) {
      return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize) {
    int **rel;
    rel = (int **)malloc(sizeof(int*) * 100000);
    int relIndex = 0;
    
    if (numsSize < 3) {
        *returnSize = relIndex;
        return rel;
    }
    
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, z = numsSize - 1;
        while (j < z) {
            int sum = nums[i] + nums[j] + nums[z];
            if (sum < 0) ++j;
            if (sum > 0) --z;
            if (sum == 0) {
                if (j > i + 1 && nums[j] == nums[j - 1]) { ++j; continue; }
                if (z < numsSize -1 && nums[z] == nums[z + 1]) { --z; continue; }
                rel[relIndex] = (int*)malloc(3*sizeof(int));
                rel[relIndex][0] = nums[i];
                rel[relIndex][1] = nums[j];
                rel[relIndex][2] = nums[z];
                ++relIndex;
                ++j;
            }
        }
    }
    *returnSize = relIndex;
    return rel;
}

int main() {
    int nums[] ={ -1, 0, 1, 2, -1, -4};
    int *returnSize;
    int **rel = threeSum(nums, 6, returnSize);
    printf("%d", rel[0][0]);
}
