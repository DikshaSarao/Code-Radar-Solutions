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
    
    // Assume the first element is both the max and min initially
    int max = arr[0];
    int min = arr[0];
    
    // Iterate through the array to find the max and min
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
    }
    
    // Output the result
    printf("%d %d",min,max);
    
    return 0;
}
