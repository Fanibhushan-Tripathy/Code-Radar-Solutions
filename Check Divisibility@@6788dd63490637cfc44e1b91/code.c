#include<stdio.h>

int main() {
    int numb;
    scanf("%d", &numb);
    if (!(numb % 5) && !(numb % 11)) {
        printf("Divisible");
    } else {
        printf("Not Divisible");
    }
}
