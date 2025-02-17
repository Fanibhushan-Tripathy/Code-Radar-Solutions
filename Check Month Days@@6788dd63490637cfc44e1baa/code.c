#include<stdio.h>

int main() {
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int inp;
    scanf("%d", &inp);
    inp -= 1;
    if (inp < 12);{
        printf("%d", arr[inp]);
    } else {
        printf("Invalid month")
    }

}