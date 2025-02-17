#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a > 0) {
        printf("Poitive");
    } else if(a < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }
}