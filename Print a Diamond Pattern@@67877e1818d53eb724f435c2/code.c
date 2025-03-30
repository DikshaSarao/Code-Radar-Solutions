#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int nsp = n / 2;  // Number of spaces before the first star
    int nst = 1;       // Number of stars in the first row
    int ml = n / 2;    // Middle row (excluding the center)
    
    // Top half of the diamond, including the middle line
    for (int i = 1; i <= ml + 1; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        // Adjust number of spaces and stars for the next row
        nsp--;    // Decrease spaces
        nst += 2; // Increase stars

        printf("\n");
    }

    // Bottom half of the diamond
    nsp = 1;  // Starting spaces for the bottom half
    nst -= 4; // Starting stars for the second half

    for (int i = 1; i <= ml; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }

        // Adjust number of spaces and stars for the next row
        nsp++;    // Increase spaces
        nst -= 2; // Decrease stars

        printf("\n");
    }

    return 0;
}
