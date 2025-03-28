int findUnsortedSubarray(int arr[],int n) {
    int fcount;
    int scount;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (fcount == NULL){
                fcount = i;
            } else {
                scount = i + 1;
            }
        }
    }
    if (fcount == NULL){
        return 0;
    } else if (scount == NULL){
        return (n - fcount);
    }
    return (scount - fcount);
}