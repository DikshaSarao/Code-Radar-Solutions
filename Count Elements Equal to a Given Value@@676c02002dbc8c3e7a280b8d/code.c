#include <stdio.h>

int main() {
    int N, K;

    // Input the size of the array and the value of K
    scanf("%d %d", &N, &K);

    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;  // To store the count of elements equal to K

    // Loop through the array and count elements equal to K
    for (int i = 0; i < N; i++) {
        if (arr[i] == K) {
            count++;
        }
    }

    // Output the count
    printf("%d\n", count);

    return 0;
}
