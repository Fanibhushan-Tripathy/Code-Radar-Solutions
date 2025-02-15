#include<stdio.h>

int main() {
    int c;
    int charnum = 0;
    scanf("%d", &c);
    for(int i = c; i > 0; i--){
        for (int j = 0; j <= i; j++){
            charnum = 65 + j;
            printf("%c ", charnum);
        }
        printf("\n");
    }
}