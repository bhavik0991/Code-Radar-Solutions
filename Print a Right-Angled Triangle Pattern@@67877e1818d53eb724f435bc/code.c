#include <stdio.h>

int main() {
    int rows a,b;

    // Asking for the number of rows (height of the triangle)
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the triangle
    for(a = 1; a <= rows; a++) {
        for(b = 1; b <= i; b++) {
            printf("*");  // Print star for each column in the row
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
