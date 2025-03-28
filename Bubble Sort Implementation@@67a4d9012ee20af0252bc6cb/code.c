#inlcude<stdio.h>
#include<stdlib.h>

void prArr(int* arr[]){
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < len; i++){
        printf("%d ", *arr[i]);
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = *a;
}

void BsortArr(in* arr[], int numb){
    for (int i = 0; i < numb; i++){
        for (int i = 0; i < numb; i++){
            if ((*arr[i] > *arr[i+1]) && (i != numb-1)) {
                swap(*arr[i], *arr[i+1]);
            }
        }
    }
    prArr();
}


int main() {
    int numb;
    scanf("%d\n", &numb);
    int* arr[numb];
    for (int i = 0; i < numb; i++){
        scanf("%d", *arr[i]);
    }
    BsortArr(arr,numb);
}