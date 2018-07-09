//
//
// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.


bool isPalindrome(int x) {
    int n = x;
    if (x < 0) 
        return false;

    long long result = 0;
    while(x) {
        result = result * 10 + x%10;
        x /= 10;
    }

    if (result == n)
        return true;

    return false;
}



bool test() {
    do {
        if (isPalindrome(121) != true)
            break;
        if (isPalindrome(-121) != false)
            break;
        
        return true;
    } while(0);

    return false;
}