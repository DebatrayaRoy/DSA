#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - 1 - i])
            return 0; // not palindrome
    }
    return 1; // palindrome
}

int main() {
    char str[] = "madam";
    if(isPalindrome(str))
        printf("Yes, palindrome");
    else
        printf("Not palindrome");
    return 0;
}
