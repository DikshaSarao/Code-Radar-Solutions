#include <stdio.h>

// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    // If there's only one element, return -1
    if (N < 2) {
        printf("-1\n");
        return 0;
    }
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort the array
    bubbleSort(arr, N);

    // Step 2: Find the pair with the smallest absolute difference
    int min_diff = abs(arr[1] - arr[0]);
    int element1 = arr[0], element2 = arr[1];

    for (int i = 1; i < N - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < min_diff) {
            min_diff = diff;
            element1 = arr[i];
            element2 = arr[i + 1];
        }
    }

    // Output the result pair
    printf("%d %d\n", element1, element2);

    return 0;
}
