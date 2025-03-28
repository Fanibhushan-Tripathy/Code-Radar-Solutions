int findUnsortedSubarray(int arr[],int n) {
    int fcount = -1;
    int scount = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (fcount == -1){
                fcount = i;
            } else {
                scount = i + 1;
            }
        }
    }
    if (fcount == -1){
        return 0;
    } else if (scount == -1){
        return (n - fcount);
    }
    return (scount - fcount);
}