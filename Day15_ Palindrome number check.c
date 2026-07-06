#include <stdio.h>

// Function banaya palindrome check karne ke liye
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int digit;
    
    while(num > 0) {
        digit = num % 10;          // last digit nikala
        reversed = reversed * 10 + digit;  // ulta banaya
        num = num / 10;            // last digit hata diya
    }
    
    if(original == reversed)
        return 1;  // true
    else
        return 0;  // false
}

int main() {
    int n;
    printf("Number daalo: ");
    scanf("%d", &n);
    
    if(isPalindrome(n) == 1)
        printf("%d Palindrome hai ✅\n", n);
    else
        printf("%d Palindrome nahi hai ❌\n", n);
    
    return 0;
}