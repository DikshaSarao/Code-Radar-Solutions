// Your code here...
#include <stdio.h>
int main(){
    char a,A,B,C,D,E,F;
    if(a=='A'){
        printf("Excellent");
    }
    else if(a=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(a=='D'){
        printf("Below Average");
    }
    else if(a=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade")
    }
    return 0;
}