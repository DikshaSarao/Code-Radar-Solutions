#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largestEven = INT_MIN; // Initialize to the smallest possible integer
    
    // Loop through the array and find the largest even number
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            if (arr[i] > largestEven) { // If it is larger than the current largest even
                largestEven = arr[i];
            }
        }
    }
    
    // If no even number is found, output -1, otherwise output the largest even number
    if (largestEven == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", largestEven);
    }
    
    return 0;
}
