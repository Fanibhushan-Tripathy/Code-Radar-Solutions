#include<stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if (!(year % 400)) {
        printf("Leap year");
    } else if (!(year % 100)) {
        printf("Not a Leap year");
    } else if (!(year % 4)) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }
}
