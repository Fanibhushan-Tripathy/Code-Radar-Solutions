#include<stdio.h>

void maxnum(int arr[], nt n){
    int Xnum = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > Xnum){
            Xnum = arr[i];
        }
    }
    printf("%d", maxnum);
}

void minnum(int arr[], int n){
    int Mnum = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < Mnum){
            Mnum = arr[i];
        }
    }
    printf("%d ", Mnum);
}

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    minnum(arr,num);
    maxnum(arr,num);
}