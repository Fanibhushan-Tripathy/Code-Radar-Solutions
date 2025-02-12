#include<stdio.h>
#include<string.h>

int main () {
    char a[21] = {"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z"};
    char b[8] = {"!","@","#","$","%","^","&","*"};
    char c[10] = {"1","2","3","4","5","6","7","8","9"};
    char e[5] = {"a","e","i","o","u"};
    char d;
    scanf("%c", &d);
    for(int i = 0; i < 21; i++) {
        if (a[i] == tolower(d)){
            printf("Consonant");
        }
    }
    for(int i = 0; i < 8; i++) {
    if (b[i] == d){
        printf("Special Character");
    }
    }
    for(int i = 0; i < 10; i++) {
    if (a[i] == d){
        printf("Digit");
    }
    }
    for(int i = 0; i < 5; i++) {
    if (a[i] == tolower(d)){
        printf("Vowel");
    }
    }
}