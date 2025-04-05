#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[num];
    int mask[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i])
        mask[i] = -1;
    }

    for(int i = 0; i < num; i++){
        int occ = 1;
        if(mask[i] != 0){
            for(int j = i + 1; j < num; j++){
                if(arr[i] == arr[j]){
                    mask[j] = 0;
                    occ++;
                }
            }
            if (mask[i] != 0){
                mask[i] = occ;
            }
        }
    }

    for(int i = 0; i < num; i++){
        if(mask[i] != 0){
            printf("%d %d\n", arr[i], mask[i])
        }
    }

}