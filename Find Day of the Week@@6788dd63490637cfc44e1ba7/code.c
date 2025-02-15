#include<stdio.h>

int main() {
    char strarr[7][15] = {"Monday", "Tuesday", "Wednesday", "Thrusday", "Friday", "Saturday", "Sunday"};
    int inp;
    scanf("%d", &inp);
    if(inp > 7 || inp < 1) {
        printf("Invalid");
    } else {
            inp -= 1;
            printf("%s", strarr[inp]);
    }
}