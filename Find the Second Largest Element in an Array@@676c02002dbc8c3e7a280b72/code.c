#include <stdio.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    // Edge case: If there are fewer than 2 elements, output -1
    if (N < 2) {
        printf("-1\n");
        return 0;
    }
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest, secondLargest;
    
    // Initialize the first two elements as largest and second largest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    
    // Traverse through the rest of the array to find the second largest
    for (int i = 2; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  // Update second largest
        }
    }
    
    // Check if second largest exists and output the result
    if (secondLargest == largest || secondLargest == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }
    
    return 0;
}
