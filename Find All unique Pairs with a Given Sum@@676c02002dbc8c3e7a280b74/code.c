#include <stdio.h>

int main() {
    int N, T;
    
    // Input size of array and target sum
    scanf("%d", &N);
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the target sum
    scanf("%d", &T);

    // Brute-force approach to find all unique pairs
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
