#include <stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // extra space for new element
    int n = 5; // current elements
    int val = 90;

    arr[n] = val; // put at end
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
