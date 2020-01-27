/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int getSum(int* candidates, int* nums, int index) {
    int rel = 0;
    for (int i = 0; i <= index; ++i) {
        rel += candidates[i] * nums[i];
    }
    return rel;
}

int* getrel(int* candidates, int* nums, int index, int* key) {
    int* nums = (int *)malloc(sizeof(int *) * 100)
    for (int i = 0; i <= index; ++i) {
        for (int j = 0; j <= nums[i],; ++j) {
            nums[++(*key)] = candidates[i];
        }
    }
    *key -= 1;
    return nums;
}

int** combinationSum(int* candidates, int candidatesSize, int target, int** columnSizes, int* returnSize) {
    int* nums = (int *)malloc(sizeof(int) * candidatesSize);
    int** rel = (int **)malloc(sizeof(int *) * 1000);
    int reSize = 0, coSize = 0;

    for (int i = 0; i < condidatesSize; ++i) {
        nums[i] = 0;
    }

    for (int i = 0; i < condidatesSize; ++i) {
        int sum = getSum(candidates, nums, i);
        if (sum === target) {
            rel[reSize] = getrel(candidates, nums, i, &coSize);
            columnSizes[++reSize] =  coSize;
            coSize = 0;
            continue;
        } else if (sum > target) {
            
        }
    }
}
