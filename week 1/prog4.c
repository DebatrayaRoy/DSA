void moveZeroes(int arr[], int n) {
    int count = 0; // count of non-zero elements

    // Move all non-zero elements to front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill remaining positions with zero
    while(count < n) {
        arr[count] = 0;
        count++;
    }
}
