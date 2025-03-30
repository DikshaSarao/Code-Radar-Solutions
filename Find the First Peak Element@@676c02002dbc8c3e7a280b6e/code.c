#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Edge case: If the array has only one element
    if (n == 1) {
        return arr[0];
    }

    // Check the first element
    if (arr[0] >= arr[1]) {
        return arr[0];
    }

    // Check the last element
    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];
    }

    // Check the rest of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }

    return -1; // No peak element found (though this shouldn't happen with valid input)
}

int main() {
    int n;

    // Take input from the user for the number of elements
    // printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Take input for the elements of the array
    // printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first peak element
    int peak = findFirstPeak(arr, n);

    if (peak != -1) {
        printf("%d", peak);
    } else {
        printf("-1");
    }

    return 0;
}
