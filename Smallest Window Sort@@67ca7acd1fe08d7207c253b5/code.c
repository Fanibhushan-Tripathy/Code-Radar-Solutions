int findUnsortedSubarray(int arr[],int n){
    int strt = -1;
    int end = -1;
    for(int i = 0; i < (n - 1); i++) {
        if ((i == 0) && arr[i] > arr[i+1]){
            strt = i;
        } else if (!(arr[i] > arr[i-1]) && (arr[i] < arr[i+1])){
            if (strt == -1){
                strt = i;
            } else if (!(arr[i] < arr[i+1])){
                end = i + 1;
            } else {
                end = i;
            }
        }
    }
    if (strt == -1){
        return 0;
    } else if (end == -1){
        return (n-strt);
    } else {
        return ((end - strt) + 1);
    }
}