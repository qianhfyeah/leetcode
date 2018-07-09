//
//
//
//Given a 32-bit signed integer, reverse digits of an integer.

#include <math.h>
#include <limits.h>
#include <stdbool.h>


int reverse(int x) {
    long long result = 0;
    while(x) {
        result = result * 10 + x%10;
        x /= 10;
    }

    if (result > INT_MAX || result < INT_MIN)
        return 0;

    return (int)result;
}


bool test() {
    // 123 expect 321
    do {
        if (reverse(1563847412) != 0)
            break;
        if (reverse(-123) != -321)
            break;
        if (reverse(1200) != 21)
            break;
        
        return true;
    } while(0);

    return false;
}