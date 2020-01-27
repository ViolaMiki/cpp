#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int min = INT_MAX;
    char *rel, temp;
    rel = (char *)malloc(sizeof(char) * min);
    if (strsSize <= 0) return rel;
    for (int i = 0; i < strsSize; ++i) {
        if (min > strlen(strs[i])) {
            min = strlen(strs[i]);
        }
    }
    for (int i = 0; i < min; ++i) {
        temp = strs[0][i];
        for (int j = 0; j < strsSize; ++j) {
            if (strs[j][i] != temp) return rel;
        }
        rel[i] = temp;
    }
    return rel;
}

int main() {
    char *rel;
    char strs[][7] = {"flower", "flow", "flight"};
    char *p = &strs[0][0];
    rel = longestCommonPrefix(&p, 3);
    for (int i = 0; i < strlen(rel); ++i) {
        printf("%d ", rel[i]);
    }
    printf("\n");
}
