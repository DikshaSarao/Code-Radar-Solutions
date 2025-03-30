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

    // Sorting the array using a simple sorting method (Bubble Sort)
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Find the median
    if (N % 2 == 1) {
        // If N is odd, median is the middle element
        printf("%d\n", arr[N / 2]);
    } else {
        // If N is even, median is the average of the two middle elements
        double median = (arr[N / 2 - 1] + arr[N / 2]) / 2.0;
        printf("%d\n", median); // Print with one decimal place
    }

    return 0;
}
