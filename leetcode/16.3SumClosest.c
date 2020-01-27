int compare (const void * a, const void * b) {
      return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    if (numsSize < 3) return 0;
    if (numsSize == 3) return nums[0] + nums[1] + nums[2];

    int rel = nums[0] + nums[1] + nums[2], prediff = abs(rel - target), sum, diff, j, z;
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize - 2; ++i) {
        j = i + 1;
        z = numsSize - 1;
        while (j < z) {
            sum = nums[i] + nums[j] + nums[z];
            diff = abs(sum - target);
            if (diff < prediff) {
                prediff = diff;
                rel = sum;
            }
            if (sum > target) { --z; continue; }
            if (sum < target) { ++j; continue; }
            --z;
        }
    }
    return rel;
}
