//
//
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M

#include <stdbool.h>

#define R_I 1
#define R_V 5
#define R_X 10
#define R_L 50
#define R_C 100
#define R_D 500
#define R_M 1000

int conv_roman(char r) {
    switch (r) {
        case 'I':
            return R_I;
        case 'V':
            return R_V;
        case 'X':
            return R_X;
        case 'L':
            return R_L;
        case 'C':
            return R_C;
        case 'D':
            return R_D;
        case 'M':
            return R_M;
        default:
            return 0;
    }
}


int romanToInt(char* s) {
    
    int num = 0;
    while(*s) {
        int step = 1;
        while(*s == *(s+1)) {
            step++;
            s++;
        }
        if (step > 1) {
            num += step * conv_roman(*s);
            s++;
            continue;
        }

        char c = *s;
        char c_n = *(s+1);
        if (!c_n) {
            num += conv_roman(c);
            break;
        }

        if ((c == 'I' && (c_n == 'V' || c_n == 'X')) || 
            (c == 'X' && (c_n == 'L' || c_n == 'C')) ||
            (c == 'C' && (c_n == 'D' || c_n == 'M'))) {
            num += (conv_roman(c_n) - conv_roman(c));
            s++;
        }
        else {
            num += conv_roman(c);
        }
        s++;
    }
    return num;
}


bool test() {
    return false;
}


