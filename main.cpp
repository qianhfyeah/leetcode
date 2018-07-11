//
//
//

#include <stdio.h>

bool test();
/*
bool test() {
    return false;
}
*/

//#include "reverse.c"
//#include "palindrome.c"
//#include "roman.c"
#include "longestprefix.c"


void test_sink() 
{
    //
    printf("begin test...\r\n");

    if (test()) {
        printf("test success!!!\r\n");
    }
    else {
        printf("bad test...\r\n");
    }

    printf("end test...\r\n");
}

int main() 
{
    test_sink();
    return 0;
}