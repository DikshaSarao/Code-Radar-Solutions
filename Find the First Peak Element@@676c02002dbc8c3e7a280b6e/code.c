#include <stdio.h>

int findPeak(int arr[], int N) {
    // Handle the edge cases where there are less than two elements.
    if (N == 1) {
        return arr[0];  // If there's only one element, it's trivially a peak.
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

    return -1;  // This line will never be reached if there's always a peak element.
}

int main() {
    int N;
    scanf("%d", &N);  // Take input size of the array
    int arr[N];
    
    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findPeak(arr, N);
    printf("%d", peak);

    return 0;
}
