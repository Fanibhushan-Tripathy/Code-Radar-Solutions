#include<stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    int charnum = 0;
    for(int i = 0; i<c; i++) {
        for(int k = 0; k <= i; k++){
            charnum = 65 + k;
            printf("%c ", charnum);
        };
        printf("\n");
    };
}