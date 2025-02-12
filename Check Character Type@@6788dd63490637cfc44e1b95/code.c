#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    char a[] = "bcdfghjklmnpqrstvwxyz";
    char b[] = "!@#$%^&*";
    char c[] = "aeiou";
    char e[] = "0123456789";
    char d;
    scanf("%c", &d);

    for(int i = 0; a[i] != '\0'; i++) {
        if (a[i] == tolower(d)){
            printf("Consonant");
        }
    }
    for(int i = 0; b[i] < '\0' ; i++) {
        if (b[i] == d){
            printf("Special Character");
        }
    }
    for(int i = 0; e[i] != '\0'; i++) {
        if (c[i] == d){
            printf("Digit");
        }
    }
    for(int i = 0; c[i] != '\0'; i++) {
        if (e[i] == tolower(d)){
            printf("Vowel");
        }
    }
}