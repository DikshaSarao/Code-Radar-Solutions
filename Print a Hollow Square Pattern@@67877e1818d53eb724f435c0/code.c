// Your code here...
#include <stdio.h>

void hollowSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the border (first and last rows or columns)
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                // Print space for the inside of the square
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    // printf("Enter the size of the square: ");
    scanf("%d", &n);  // Input the size of the square
    hollowSquare(n);
    return 0;
}
