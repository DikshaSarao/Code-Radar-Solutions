#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Create a hash set to track elements we've seen
    int hashTable[10000] = {0}; // Assuming the elements are between 0 and 9999
    
    // Traverse the array and check for repeating elements
    for (int i = 0; i < N; i++) {
        if (hashTable[arr[i]] > 0) {
            // If element is already in the hash table, it's the first repeating element
            printf("%d\n", arr[i]);
            return 0;
        }
        // Mark the element as seen
        hashTable[arr[i]] = 1;
    }

    // If no repeating element found
    printf("-1\n");

    return 0;
}
