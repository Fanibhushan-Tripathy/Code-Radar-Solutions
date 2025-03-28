#include<stdio.h>
#include<stdlib.h>

void prArr(int* arr[], int numb){
    for(int i = 0; i < numb; i++){
        printf("%d ", *arr[i]);
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BsortArr(int* arr[], int numb){
    for (int i = 0; i < numb - 1; i++){
        for (int j = 0; j < numb - i - 1; j++){
            if (*arr[j] > *arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    prArr(arr,numb);
}


int main() {
    int numb;
    scanf("%d", &numb);
    int** arr = (int**)malloc(numb * sizeof(int*));
    for (int i = 0; i < numb; i++){
        arr[i] = (int* )malloc(sizeof(int));
        scanf("%d", arr[i]);
    }
    BsortArr(arr,numb);
    
    // Free allocated memory
    for (int i = 0; i < numb; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
