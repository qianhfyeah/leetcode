//
//
// Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string ""

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize <= 0) return "";

    for (int i = 1; i < strsSize; ++i) {
        for (int j = 0; ; ++j) {
            if (strs[i][j] == '\0' || 
                strs[0][j] == '\0' || 
                strs[i][j] != strs[0][j]) {
                strs[0][j] = '\0';
                break;
            }
        }   
    }

    return strs[0];
}

bool test() {
    char* strs[] = {"flower", "flow", "flight"};


    char* pre = longestCommonPrefix(strs, 3);

    printf("%s\r\n", pre);

    free(pre);

    return true;
}


