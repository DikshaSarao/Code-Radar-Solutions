#include <stdio.h> 

int main() {     
    int a, b, d;     
    char ch;     
    scanf("%d" "%d" "%c", &a, &b, &ch);  // Space between format specifiers
     
    switch(ch) {         
        case "+": 
            d = a + b;         
            printf("%d", d);         
            break;         
        case "-": 
            d = a - b;         
            printf("%d", d);         
            break;         
        case "/": 
            d = a / b;         
            printf("%d", d);         
            break;         
        case "*": 
            d = a * b;         
            printf("%d", d);         
            break;         
        default: 
            printf("error");     
    }     
    return 0;  
}
