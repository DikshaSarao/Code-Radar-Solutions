// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
}