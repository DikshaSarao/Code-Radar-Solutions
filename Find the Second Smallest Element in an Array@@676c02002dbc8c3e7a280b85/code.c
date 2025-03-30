#include <stdio.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    // If the size of the array is less than 2, there cannot be a second smallest element
    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the smallest and second smallest elements to a large value
    int smallest = arr[0];
    int second_smallest = -1;

    // Traverse the array
    for (int i = 1; i < N; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && (second_smallest == -1 || arr[i] < second_smallest)) {
            second_smallest = arr[i];
        }
    }

    // Output the result: if second smallest is not found, print -1
    printf("%d\n", second_smallest);

    return 0;
}
