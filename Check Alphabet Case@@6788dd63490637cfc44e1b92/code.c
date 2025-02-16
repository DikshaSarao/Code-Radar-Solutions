// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("%c",a);
    }
    else if(islower(a)){
        printf("%c",a);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}