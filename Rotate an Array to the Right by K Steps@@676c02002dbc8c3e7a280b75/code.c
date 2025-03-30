#include <stdio.h>

void reverse(int arr[], int si, int ei) {
    while (si < ei) {
        // Swap elements at si and ei
        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;
        si++;
        ei--;
    }
}

int main() {
    int N;
    scanf("%d", &N);  // Corrected semicolon
    int arr[N];
    
    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);  // Read the number of positions to rotate
    
    k = k % N;  // Handle case when k is larger than N
    
    // Reverse the entire array
    reverse(arr, 0, N - 1);
    
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    
    // Reverse the rest of the array from k to N-1
    reverse(arr, k, N - 1);
    
    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    // printf("\n");  // For a new line at the end
    
    return 0;
}
