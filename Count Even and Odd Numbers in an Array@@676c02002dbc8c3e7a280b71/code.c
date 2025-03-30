#include <stdio.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int evenCount = 0, oddCount = 0;
    
    // Iterate through the array and count even and odd numbers
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  // Increment even count if the number is even
        } else {
            oddCount++;   // Increment odd count if the number is odd
        }
    }
    
    // Output the result
    printf("%d %d", evenCount ,oddCount);
    
    return 0;
}
