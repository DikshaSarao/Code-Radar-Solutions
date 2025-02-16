#include <stdio.h> 

int main() {     
    int a, b;     
    char ch;     
    scanf("%d %d %c", &a, &b, &ch);  // Space between format specifiers
     
    switch(ch) {         
        case '+':        
            printf("%d\n",a + b);         
            break;         
        case '-':         
            printf("%d\n",a - b);         
            break;
        case '*': printf("%d",a * b);        
        case '/':
        if(b==0){
            printf("error\n");
        }
        else{
            printf("%d\n",a/b);
        }
        break;
        default: printf("error\n");
        break;
    }     
    return 0;  
}
