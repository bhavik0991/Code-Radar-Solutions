#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);  

    
    if (c == 'a'  || c == 'e' ||  c == 'i'  || c == 'o'  || c == 'u' ) {
        printf("Vowel");
    } else {
        printf("consonant");
    }

    return 0;
}
