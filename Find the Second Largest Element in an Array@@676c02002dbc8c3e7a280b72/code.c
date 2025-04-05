#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    int Lnum = arr[0];
    int Snum = -9999;
    for(int i = 0; i < num; i++){
        if(arr[i] > Lnum){
            Snum = Lnum;
            Lnum = arr[i];
        }
        if((arr[i] > Snum) && (arr[i] < Lnum)){
            Snum = arr[i];
        }
    }
    if (-9999 == Snum){
        printf("-1");
    } else {
        printf("%d", Snum);
    }

}