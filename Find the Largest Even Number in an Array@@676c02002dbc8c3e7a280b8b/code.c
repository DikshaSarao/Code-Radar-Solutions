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
    
    int largestEven = -1; // Initialize to -1, in case no even number is found
    
    // Loop through the array and find the largest even number
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            if (arr[i] > largestEven) { // If it is larger than the current largest even
                largestEven = arr[i];
            }
        }
    }
    
    // Output the result
    printf("%d\n", largestEven);
    
    return 0;
}
