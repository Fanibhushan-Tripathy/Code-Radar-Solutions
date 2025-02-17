#include<stdio.h>

int main() {
    int numb;
    scanf("%d", &numb);
    if (!(numb % 2)) {
        printf("Even");
    } else {
        printf("Odd");
    }
}