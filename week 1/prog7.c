#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("%s", str);
    return 0;
}
