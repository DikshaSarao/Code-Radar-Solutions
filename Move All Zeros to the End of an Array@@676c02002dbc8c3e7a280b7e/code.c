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

    // Pointer for the next position of non-zero elements
    int i = 0;
    
    // Move non-zero elements to the front
    for (int j = 0; j < N; j++) {
        if (arr[j] != 0) {
            arr[i] = arr[j];
            if (i != j) {
                arr[j] = 0;  // Set the current position to 0 after moving non-zero element
            }
            i++;
        }
    }

    // Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
