int findUnsortedSubarray(int arr[],int n) {
    int fcount;
    int scount;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (fcount != 0){
                fcount = i;
            } else {
                scount = i;
            }
        }
    }
    return (fcount - scount);
}