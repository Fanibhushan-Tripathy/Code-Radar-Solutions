#include<stdio.h>

int main() {
    int c;
    int charnum = 0;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        for (int j = i; j >= 0; j--){
            charnum = 65 + j;
            printf("%c ", charnum);
        }
        printf("\n");
    }
}