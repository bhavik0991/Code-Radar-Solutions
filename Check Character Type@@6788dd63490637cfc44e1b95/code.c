#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);  

    
    if (c == 'a'  || c == 'e' ||  c == 'i'  || c == 'O'  || c == 'u' ) {
        printf("Vowel");
    } else {
        printf("Consonant");
    }

    return 0;
}
