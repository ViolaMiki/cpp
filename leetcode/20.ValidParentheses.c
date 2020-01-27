#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValid(char* s) {
    char temp, *p;
    int len = strlen(s), j = 0, k;
    char* a = (char *)malloc(len * sizeof(char));
    char *left = "([{", *right = "}])";

    for (int i = 0; i < len; ++i) {
        p = strchr(left, s[i]);
        printf("s[i]: %c ===",s[i]);
        if (p) {
            printf("s[i]: %c ---\n",s[i]);
            a[j++] = s[i];
        } else {
            p = strchr(right, s[i]);
            printf("*p: %c \n", *p);
            k = p - right;
            
            temp = s[j--];
            if (temp == left[k]) continue;
            else return 0;
        }
    }
    return 1;
}

int main() {
    char* s = "()";
    int rel = isValid(s);
    printf("rel: %d", rel);
}
