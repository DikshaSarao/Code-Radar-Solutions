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

    // Calculate the running sum
    int running_sum = 0;
    for (int i = 0; i < N; i++) {
        running_sum += arr[i];  // Add the current element to the cumulative sum
        arr[i] = running_sum;   // Store the cumulative sum at the current index
    }

    // Output the running sum array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
