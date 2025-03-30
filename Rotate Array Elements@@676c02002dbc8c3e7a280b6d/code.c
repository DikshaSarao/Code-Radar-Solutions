#include <stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si;int j=ei;i++;j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    } return ;
}
int main(){
    int N;
    scanf("%d",&N):
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k%n;
    reverse(arr,0,N-1);
    reverse(arr,0,k-1);
    reverse(arr,k,N-1);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    return 0;
}
