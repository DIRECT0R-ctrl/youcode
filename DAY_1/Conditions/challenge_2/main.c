#include <stdio.h>

int main() {
    char ch;
    printf("please enter the character : ");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c its a vowel.\n", ch);
            break;
        default:
            printf("%c its not a vowel.\n", ch);
    }

    return 0;
}   
