#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int Lnum = arr[0];
    int Snum = arr[0];
    for(int i = 0; i < num; i++){
        if(arr[i] > Lnum){
            Snum = Lnum;
            Lnum = arr[i];
        }
    }
    if (Lnum == Snum){
        printf("-1");
    } else {
        printf("%d", Snum);
    }

}