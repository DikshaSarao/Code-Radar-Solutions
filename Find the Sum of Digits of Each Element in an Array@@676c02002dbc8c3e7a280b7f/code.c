// Your code here...
#include <stdio.h>
int sum(int num){
    sum=0;
    while(sum!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scannf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        int d = sum(arr[i]);
        printf("%d",d);
    }

}