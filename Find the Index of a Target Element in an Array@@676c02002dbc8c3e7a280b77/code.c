#include <stdio.h>

int main() {
    int N, T;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the target element
    scanf("%d", &T);
    
    // Search for the target element in the array
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            printf("%d\n", i);  // Print the index of the first occurrence
            return 0;  // Exit after finding the first occurrence
        }
    }
    
    // If the element is not found
    printf("-1\n");
    return 0;
}
