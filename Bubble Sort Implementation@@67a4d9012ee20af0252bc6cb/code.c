#include<stdio.h>

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
