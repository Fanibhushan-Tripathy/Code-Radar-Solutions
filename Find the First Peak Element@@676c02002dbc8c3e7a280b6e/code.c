#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++) {
        if (i == 0){
            if(arr[i] > arr[i+1]){
                printf("%d", arr[i]);
                break;
            }
        } else if (i == n-1) {
            if (arr[i] > arr[i-1]) {
                printf("%d", arr[i]);
                break;
            }
        } else {
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                printf("%d", arr[i]);
                break;
            }
        }
    }
}