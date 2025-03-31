#include <stdio.h>

void printPyramid(int N) {
    // Outer loop for number of rows
    for (int i = 1; i <= N; i++) {
        // Inner loop for spaces before stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printPyramid(N);
    return 0;
}
