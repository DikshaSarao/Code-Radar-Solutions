#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }
    
    // Check divisibility from 2 to num-1
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number if divisible by any i
        }
    }
    
    return 1;  // It's a prime number
}

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the number of prime numbers in the array
    int primeCount = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    // Output the result
    printf("%d\n", primeCount);

    return 0;
}
