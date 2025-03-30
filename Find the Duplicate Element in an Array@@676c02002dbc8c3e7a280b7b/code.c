#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the duplicate element
    for (int i = 0; i < N; i++) {
        int absValue = abs(arr[i]);  // Get the absolute value to handle negative numbers
        
        // If the element at index abs(arr[i]) is negative, it's the duplicate
        if (arr[absValue] < 0) {
            printf("%d\n", absValue);  // Output the duplicate
            return 0;  // Exit the program after finding the duplicate
        }
        
        // Otherwise, mark the element by making the value at index abs(arr[i]) negative
        arr[absValue] = -arr[absValue];
    }

    return 0;  // This line should not be reached if there is exactly one duplicate
}
