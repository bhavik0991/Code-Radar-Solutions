#include <stdio.h>

void printPyramid(int N) {
   
    for (int i = 1; i <= N; i++) {
      
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
       
        printf("\n");
    }
}

int main() {
    int N;
    printf(" ");
    scanf("%d", &N);
    printPyramid(N);
    return 0;
}
