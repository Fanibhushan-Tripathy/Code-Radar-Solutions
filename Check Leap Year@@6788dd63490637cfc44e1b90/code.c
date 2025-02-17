#include<stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if (!(year % 400)) {
        printf("Leap Year");
    } else if (!(year % 100)) {
        printf("Not a Leap Year");
    } else if (!(year % 4)) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
}
