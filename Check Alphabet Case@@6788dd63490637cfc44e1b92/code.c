#include<stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    // int b = (int)a;
    // printf("%d", b);
    if ((a >= 97) && (a <= 123)) {
        printf("Lowercase");
    } else if((a >= 65) && (a <= 91)){
        printf("Uppercase");
    } else {
        printf("Not an alphabet");
    }
}