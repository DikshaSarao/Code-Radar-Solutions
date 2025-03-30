#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max1 = abs(arr[0]); int max2 = abs(arr[1]);
    if(max1<max2){
        max1=abs(arr[1]);
        max2=abs(arr[0]);
    }
    for(int i=2;i<N;i++){
        if(abs(arr[i])>max1){
            max1=max2;
            max1=abs(arr[i]);
        } else if(abs(arr[i])>max2){
            max2=abs(arr[i]);
        }
    } printf("%d",max1*max2);
    return 0;
}
