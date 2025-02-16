#include <stdio.h> 

int main() {     
    int a, b;     
    char ch;     
    scanf("%d" "%d" "%c", &a, &b, &ch);  // Space between format specifiers
     
    switch(ch) {         
        case '+':        
            printf("%d\n",a + b);         
            break;         
        case '-':         
            printf("%d",a - b);         
            break;         
        case '/':          
            printf("%d",a / b);         
            break;         
        case '*':          
            printf("%d",a * b);         
            break;         
        default: 
            printf("error");     
    }     
    return 0;  
}
