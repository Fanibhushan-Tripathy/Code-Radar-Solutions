#include<stdio.h>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        int minInd = i;
        for (int j = i + 1; j < n - 1; j++) {
            if (arr[j] < arr[minInd]){
                minInd = j;
            }
        }
        int temp = arr[minInd];
        arr[minInd] = arr[i];
        arr[i] = temp;
    }
}