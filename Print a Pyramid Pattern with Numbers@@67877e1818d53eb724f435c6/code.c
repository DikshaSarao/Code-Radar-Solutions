#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Take user input for the number of rows

    for (int i = 1; i <= n; i++) {
        // Printing leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
