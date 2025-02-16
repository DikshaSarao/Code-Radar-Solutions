// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        ch=toupper(ch);
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("Vowel");
        }
        else{
            printf("Constant");
        }
    }else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}