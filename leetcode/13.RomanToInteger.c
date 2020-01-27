// #include <stdio.h>
// #include <string.h>

int romanToInt(char* s) {
    int rel = 0, j = strlen(s) - 1;
    char symbol[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    int val[] = {1000, 500, 100, 50, 10, 5, 1};
    for (int i = 6; i >= 0; --i) {
        while (j >= 0) {
            if (s[j] != symbol[i]) {
                break;
            }
            if (j > 0 && i < 6 && s[j - 1] == symbol[i + 1]) {
                rel = rel + val[i] - val[i + 1];
                j -= 2;
            } else if (j > 0 && i < 5 &&s[j - 1] == symbol[i + 2]) {
                rel = rel + val[i] - val[i + 2];
                j -= 2;
            } else {
                rel += val[i];
                j -= 1;
            }
        }
    }
    return rel;
}

// int main() {
//     char *a = "MCMXCIV";
//     printf("%d", romanToInt(a));
// }
