// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("%d",i);
        if(i<N){
            printf(" ");
        }
    }
    return 0;
}