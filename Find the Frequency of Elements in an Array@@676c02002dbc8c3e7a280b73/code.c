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
    
    // Iterate through the array to find and print frequencies
    for (int i = 0; i < N; i++) {
        int count = 1;  // Count the frequency of arr[i]
        
        // Skip if arr[i] is already counted
        if (arr[i] == -1) {
            continue;
        }
        
        // Count occurrences of arr[i] in the rest of the array
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark arr[j] as counted by changing it to -1
            }
        }
        
        // Print the frequency of arr[i]
        printf("%d %d\n", arr[i], count);
    }
    
    return 0;
}
