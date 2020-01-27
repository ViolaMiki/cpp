/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
void  midCompare(int* nums, int target, int* head, int* tail, int* targetId) {
    int mid = (*tail + *head) / 2;
    if (nums[mid] == target) *targetId = mid;
    else if (nums[mid] < target) *head = mid + 1;
    else *tail = mid - 1;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* rel = (int *)malloc(sizeof(int) * 2);
    rel[0] = -1;
    rel[1] = -1;

    int targetId = -1, head = 0, tail = numsSize - 1;
    *returnSize = 2;
    while (targetId == -1 && head <= tail) {
        midCompare(nums, target, &head, &tail, &targetId);
    }

    if (targetId == -1) {
        return rel;
    }

    if (targetId == 0) {
        rel[0] = 0;
    }
    if (targetId == numsSize - 1) {
        rel[1] = targetId;
    }

    int left = targetId, right = targetId;
    while (rel[0] == -1 || rel[1] == -1) {
        if (rel[0] == -1) {
            --left;
            if (nums[left] != target) { rel[0] = left + 1; continue; }
            if (left == 0) rel[0] = left;
        }

        if (rel[1] == -1) {
            ++right;
            if (nums[right] != target) { rel[1] = right - 1; continue; }
            if (right == numsSize - 1) rel[1] = right;
        }
    }
    return rel;
}
