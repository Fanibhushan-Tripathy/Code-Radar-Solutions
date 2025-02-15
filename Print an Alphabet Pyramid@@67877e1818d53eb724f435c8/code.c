#include<stdio.h>

int main() {
    int c;
    char 
    scanf("%d", &c);
    for(int i = 0; i<c; i++) {
        for(int k = 0, k <= i; k++){
            int charnum = 65 + k;
            printf("%c", charnum);
        };
        printf("\n");
    };

}