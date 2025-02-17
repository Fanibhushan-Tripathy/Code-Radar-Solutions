#include<stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("%d", a);
    if ((a >= 65) && (a <= 91)) {
        printf("Lowercase");
    } else if((a >= 97) && (a <= 123)){
        printf("Uppercase");
    } else {
        printf("Not an alphabet");
    }
}