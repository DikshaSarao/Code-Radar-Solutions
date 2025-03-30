#include <stdio.h>

int findFirstPeak(int arr[], int N) {
    // Handle the case for arrays with one element
    if (N == 1) {
        return arr[0];
    }
    
    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        return arr[0];
    }
    
    // Check if the last element is a peak
    if (arr[N - 1] >= arr[N - 2]) {
        return arr[N - 1];
    }
    
    // Check for a peak element in the middle of the array
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }
    
    return -1; // If no peak element is found
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
    
    // Find the first peak element
    int peak = findFirstPeak(arr, N);
    
    // Output the result
    printf("%d\n", peak);
    
    return 0;
}
