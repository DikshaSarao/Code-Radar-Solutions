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

    int max_right = arr[N - 1]; // Start with the last element
    arr[N - 1] = -1; // Set the last element to -1

    // Traverse the array from right to left
    for (int i = N - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = max_right; // Replace current element with the greatest element to its right
        if (current > max_right) {
            max_right = current; // Update max_right if current element is greater
        }
    }

    // Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
