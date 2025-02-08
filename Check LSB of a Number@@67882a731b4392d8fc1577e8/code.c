#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a & 1){
    printf("set\n");
    }
    else{
        printf("Not Set");
    }
    return 0;
}