#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** letterCombinations(char* digits, int* returnSize) {
    char a[][5] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int max[] = {2, 2, 2, 2, 2, 3, 2, 3};
    char **result = (char **)malloc(1000 * sizeof(char *));
    int size = 0, length = strlen(digits), over = 0;
    if (length == 0) {
        *returnSize = 0;
        return result;
    }
    
    int index[length];
    for (int i = 0; i< length; ++i) {
        index[i] = 0;
    }
        int z = 0;
    while (over != 1) {
        result[size] = (char *)malloc((length + 1) * sizeof(char));
        int i;
        for (i = 0; i < length; ++i) {
            int num = digits[i] - '0' - 2;
            result[size][i] = a[num][index[i]];
        }
        result[size][i] = '\0';
        for (int j = length - 1; j >= 0; --j) {
            int num = digits[j] - '0' - 2;
            if (j == 0 && index[0] == max[num]) {
                over = 1;
                break;
            }
            if (index[j] + 1 > max[num]) {
                index[j] = 0;
            } else {
                ++index[j];
                break;
            }
        }
        ++size;
    }
    *returnSize = size;
    return result;
}

int main () {
    char digits[] = {9, 9, 9};
    int size;
    char **rel = letterCombinations(digits, &size);
    printf("%d\n", size);
}
