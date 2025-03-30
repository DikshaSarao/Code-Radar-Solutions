#include <stdio.h>

int main() {
    int N;
    
    // Input size of array
    scanf("%d", &N);
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Create an array to track the frequency of elements
    int freq[N];  // Frequency array to keep track of the counts (index 0 will not be used)
    
    // Initialize frequency array with 0
    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }
    
    // Find the duplicate
    for (int i = 0; i < N; i++) {
        // If frequency of element is already 1, it is the duplicate
        if (freq[arr[i]] > 0) {
            printf("%d\n", arr[i]);
            return 0;  // Exit after finding the duplicate
        }
        
        // Otherwise, mark the element as seen by updating its frequency
        freq[arr[i]]++;
    }

    return 0;  // Shouldn't reach here if there is a duplicate
}
