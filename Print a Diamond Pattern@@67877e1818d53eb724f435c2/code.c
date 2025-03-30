#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input for the top half row count of the diamond

    // Ensure that the number of lines is always 5, as per the requirement
    // Calculate the number of spaces and stars based on n

    // Top half
    int nsp = n / 2;  // spaces before the stars
    int nst = 1;       // stars in the first row

    // First half of the diamond (including the middle row)
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        // Update spaces and stars for next row
        if (i < n / 2 + 1) {
            nsp--;   // Decrease spaces as we go down
            nst += 2; // Increase stars
        } else {
            nsp++;   // Increase spaces after middle row
            nst -= 2; // Decrease stars after middle row
        }

        printf("\n");
    }

    return 0;
}
