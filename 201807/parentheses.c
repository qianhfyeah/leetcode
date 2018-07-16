//
//
//

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool isMatch(char l, char r) {
    return (l == '('&& r == ')') || (l == '[' && r == ']') || (l == '{' && r == '}');
}


bool isValid(char* s) {
    
    char* stack = (char*)malloc(strlen(s));
    int head = -1;
    
    for(int i = 0; s[i]; ++i) {
        if (head != -1 && isMatch(stack[head], s[i])) {
            head--;
            continue;
        }

        stack[++head] = s[i];
    }
    
    free(stack);

    if (head != -1) 
        return false;
    return true;
}




bool test() {
    return isValid("{[()]}");
}