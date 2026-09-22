//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90) {
        printf("'%c' is an uppercase alphabet.\n", ch);
    } 
    else if (ch >= 97 && ch <= 122) {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } 
    else if (ch >= 48 && ch <= 57) {
        printf("'%c' is a digit.\n", ch);
    } 
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
