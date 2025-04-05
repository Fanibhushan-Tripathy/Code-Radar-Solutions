#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int noans = 0;

    for(int i = 0; i < num; i++) {
        if (i == 0){
            if(arr[i] > arr[i+1]){
                printf("%d", arr[i]);
                noans = 1;
                break;
            }
        } else if (i == num-1) {
            if (arr[i] > arr[i-1]) {
                printf("%d", arr[i]);
                noans = 1;
                break;
            }
        } else {
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                printf("%d", arr[i]);
                noans = 1;
                break;
            }
        }
    }
    if (noans == 0){
        printf("-1");
    }
}