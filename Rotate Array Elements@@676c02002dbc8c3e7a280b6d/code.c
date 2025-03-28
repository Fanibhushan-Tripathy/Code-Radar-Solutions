#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    int shift;
    int counter = 0;
    int narr[num];
    scanf("%d", &shift);

    for(int i = (num - shift); i < num; i++){
        narr[counter] = arr[i];
        counter++;
    }
    for(int i = 0; i < (num - shift); i++){
        narr[counter] = arr[i];
        counter++;
    }

    for(int i = 0; i < num; i++){
        printf("%d\n", narr[i]);
    }
}