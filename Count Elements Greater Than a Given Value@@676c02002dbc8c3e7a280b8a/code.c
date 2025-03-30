#include <stdio.h>

int main() {
    int N, K;
    
    // Input the size of the array (N) and the value K
    scanf("%d %d", &N, &K);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    
    // Count elements greater than K
    for (int i = 0; i)
