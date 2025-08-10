int isSorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1])
            return 0; // not sorted
    }
    return 1; // sorted
}
