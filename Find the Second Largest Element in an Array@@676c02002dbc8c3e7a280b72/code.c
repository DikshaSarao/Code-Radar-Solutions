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
    
    int largest = arr[0];
    int secondLargest = -1;  // Initialize secondLargest to a low value
    
    // Loop through the array to find the largest and second largest
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest
        }
    }
    
    // Output the second largest element
    printf("%d", secondLargest);
    
    return 0;
}
