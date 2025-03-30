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

    // Find the greatest element in the array
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Replace all elements with the greatest element, except the last one
    for (int i = 0; i < N - 1; i++) {
        arr[i] = max;
    }

    // Set the last element to -1
    arr[N - 1] = -1;

    // Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
