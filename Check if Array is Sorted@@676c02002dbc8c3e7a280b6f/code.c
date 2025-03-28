#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int spvar = 0;
    for(int i = 0; i < (num-1); i++){
        if(!(arr[i] <= arr[i+1])){
            spvar = 1;
        }
    }
    if(spvar == 0){
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }
}