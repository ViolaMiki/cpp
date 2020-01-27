// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char* intToRoman(int num) {
    char *roman;
    roman = (char *)malloc(sizeof(char) * 28);
    char symbol[] = {' ', ' ', 'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    int key[] = {1000, 100, 10, 1};

    int i = 0, si = 2, ki = 0, val = 0;
    while (ki < 4) {
        val = num / key[ki];
        if (val > 0) num = num % key[ki];
        if(val == 9) {
            roman[i++] = symbol[si];
            roman[i++] = symbol[si - 2];
        } else if (4 < val && val  < 9) {
            roman[i++] = symbol[si - 1];
            val -= 5;
        } 
    
        if (val == 4) {
            roman[i++] = symbol[si];
            roman[i++] = symbol[si - 1];
        } else if (val < 4) {
            while (val-- != 0) roman[i++] = symbol[si]; 
        }
        si += 2;
        ++ki;
    }
    roman[i] = '\0';
    return roman;
}

// int main() {
//     char *result = intToRoman(12);
//     for (int i = 0; i < strlen(result); i++) {
//         printf("%c ", result[i]);
//     }
//     printf("\n");
// }
