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

    // Check if the array is a palindrome
    int isPalindrome = 1;  // Assume it's a palindrome initially
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            isPalindrome = 0;  // If any mismatch is found, it's not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
