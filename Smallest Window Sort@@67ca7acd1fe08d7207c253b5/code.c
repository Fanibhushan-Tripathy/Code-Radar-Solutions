int findUnsortedSubarray(int arr[],int n) {
    int fcount = 0;
    int scount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (fcount != 0){
                fcount = i;
            } else {
                scount = i + 1;
            }
        }
    }
    return (scount - fcount);
}