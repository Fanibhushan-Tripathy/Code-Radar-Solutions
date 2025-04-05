#include<stdio.h>

void OddEvenCount(int arr[], int n){
    int evCount = 0;
    int odCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) {
            evCount++;
        } else {
            odCount++;
        }
    }
    printf("%d %d", evCount, odCount);
}