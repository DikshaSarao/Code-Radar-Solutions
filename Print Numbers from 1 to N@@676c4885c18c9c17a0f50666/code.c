// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Take the number of elements to print
    
    for (int i = 1; i <= N; i++) {
        printf("%d", i);  // Print the number
        
        if (i < N) {  // Avoid space after the last number
            printf(" ");
        }
    }
    
    printf("\n");  // Print a newline after all the numbers are printed
    
    return 0;
}
