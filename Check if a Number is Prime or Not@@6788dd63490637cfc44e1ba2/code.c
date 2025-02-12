#include<stdio.h.

int main() {
    int a;
    scanf("%d", &a);
    switch(a) {
        case (1):
            printf("Not Prime");
            break;
        case (2):
            printf("Prime");
            break;
        default:
            for(int i = 2; i <= a; i++) {
                int b = a % 2;
                if (b == 0){
                    printf("Not Prime");
                    break;
                }
            }
            printf("Prime");
    }

}