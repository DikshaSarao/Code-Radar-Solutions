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
    
    // Count occurrences of each element
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If count is greater than N/2, it's the majority element
        if (count > N / 2) {
            printf("%d\n", arr[i]);
            return 0;  // Exit after finding the majority element
        }
    }
    
    // If no majority element is found
    printf("-1\n");
    return 0;
}
