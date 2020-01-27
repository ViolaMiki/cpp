int search(int* nums, int numsSize, int target) {
    int i = 0, result = -1, state = nums[0] > target;
    while(state == (nums[i] > target)) {
        if (nums[i] == target) return i;
        if (nums[i] > target) {
            if (i == 0) i = numsSize - 1;
            else --i;
            if (i == 0) break;
        }
        else if (nums[i] < target) {
            ++i;
            if (i == numsSize) break;
        }
    }
    if (nums[i] == target) return i;
    return result;
}
