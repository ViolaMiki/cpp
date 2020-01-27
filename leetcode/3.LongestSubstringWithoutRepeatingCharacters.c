int lengthOfLongestSubstring(char* s) {
    if (*s == '\0') return 0;

    int length, i, j, tempLen, resultLen, tempIndex, resultIndex, startIndex;
    
    length = strlen(s);
    char a[2][length];
    tempLen = 0;
    resultLen = 0;
    tempIndex = 0;
    resultIndex = 1;
    startIndex = 1;

    for (i = 0; i < length; i++) {
        for(j = 0; j < tempLen; j++) {
            if (a[tempIndex][j] == s[i]) {
                if (resultLen > tempLen) {
                    tempLen = 0;
                } else {
                    resultLen = tempLen;
                    tempLen = 0;
                    tempIndex = tempIndex == 1 ? 0 : 1;
                    resultIndex = resultIndex == 1 ? 0 : 1;
                }
                i = startIndex++; 
                break;
            }
        }

        a[tempIndex][tempLen] = s[i];
        ++tempLen;
    }
    return tempLen > resultLen ? tempLen : resultLen;
}
