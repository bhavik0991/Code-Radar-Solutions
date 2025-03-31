#include <stdio.h>

int main() {
    int rows, a,b;

    
    printf("*");
    scanf("%d", &rows);

    
    for(a = 1; a <= rows; a++) {
        for(b = 1; b <= a; b++) {
            printf("* ");  
        }
        printf("\n");  
    }

    return 0;
}
