#include <stdio.h>

// Function to check if a number is palindromic
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    // Compare original and reversed numbers
    return original == reversed;
}

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    
    // Count palindromic numbers
    for (int i = 0; i < N; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    
    // Output the result
    printf("%d\n", count);
    
    return 0;
}
