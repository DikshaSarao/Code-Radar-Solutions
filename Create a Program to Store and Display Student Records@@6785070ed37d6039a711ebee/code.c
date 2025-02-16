#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int rollNumbers[N];      // Array to store roll numbers
    char names[N][50];       // 2D array to store names (assuming each name is less than 50 characters)
    float marks[N];          // Array to store marks

    // Reading student details
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &rollNumbers[i], names[i], &marks[i]);
    }

    // Displaying student details in the required format
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", rollNumbers[i], names[i], marks[i]);
    }

    return 0;
}