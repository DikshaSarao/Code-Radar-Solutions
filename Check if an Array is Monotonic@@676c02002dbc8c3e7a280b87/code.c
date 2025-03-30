#include <stdio.h>

int isMonotonic(int arr[], int N) {
    int i = 0;
    
    // Check if the array is non-decreasing
    while (i < N - 1 && arr[i] <= arr[i + 1]) {
        i++;
    }
    
    // Check if the array is non-increasing
    while (i < N - 1 && arr[i] >= arr[i + 1]) {
        i++;
    }
    
    // If we reached the end, it means the array is monotonic
    return i == N - 1;
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
    
    // Check if the array is monotonic
    if (isMonotonic(arr, N)) {
        printf("The array is monotonic.\n");
    } else {
        printf("The array is not monotonic.\n");
    }
    
    return 0;
}
