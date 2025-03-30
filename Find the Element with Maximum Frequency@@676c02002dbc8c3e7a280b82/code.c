#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_freq = 0;
    int result = -1;
    
    // Iterate through the array
    for (int i = 0; i < N; i++) {
        int count = 0;
        
        // Count the frequency of arr[i]
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If this element has a higher frequency or same frequency but smaller element, update result
        if (count > max_freq || (count == max_freq && arr[i] < result)) {
            max_freq = count;
            result = arr[i];
        }
    }
    
    // Output the result
    printf("%d\n", result);
    
    return 0;
}
