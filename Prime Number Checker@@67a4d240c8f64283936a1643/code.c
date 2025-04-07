#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  
    }
    return 1;  
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (isPrime(n)) 
        printf("%d is prime.\n", n);
    else 
        printf("%d is not prime.\n", n);

    return 0;
}
