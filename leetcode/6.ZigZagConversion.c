char* convert(char* s, int numRows) {
    int temp = (numRows - 1) * 2, j = 0, k = 0, round = (numRows - 1) * 2;
    int length = strlen(s);
    char *a = (char *)malloc(sizeof(char) * (length + 1));
    if (length <= numRows || numRows <= 1) {
        return s;
    }
    for (int i = 0; i < numRows; ++i) {
        while (j < length) {
            a[k++] = s[j];
            j += temp;
            if (i != 0 && i != numRows - 1) {
                temp = round - temp;
            }
        }
        j = i + 1;
        temp = j == numRows - 1 ? round : (numRows - j - 1) * 2;
    }
    a[length] = '\0';
    return a;
}
