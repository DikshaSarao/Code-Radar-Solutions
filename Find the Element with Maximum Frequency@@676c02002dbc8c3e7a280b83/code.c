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

    int max_freq = 0;  // To store the maximum frequency
    int max_element = -1;  // To store the element with max frequency
    
    // Check each element for frequency
    for (int i = 0; i < N; i++) {
        int count = 1;  // Start with a count of 1 for the element arr[i]
        
        // Count occurrences of arr[i]
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update the element with max frequency
        if (count > max_freq) {
            max_freq = count;
            max_element = arr[i];
        }
    }

    // Output the element with the maximum frequency
    printf("%d\n", max_element);

    return 0;
}
