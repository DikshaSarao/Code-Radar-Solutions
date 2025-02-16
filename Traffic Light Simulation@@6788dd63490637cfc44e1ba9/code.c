// Your code here...
#include <stdio.h>
int main(){
    char signal;
    scanf("%c",&signal);
    switch(signal){
        case 'R':printf("Stop");
        break;
        case 'G':printf("Go");
        break;
        case 'Y':printf("Slow Down");
        break;
        default:printf("Invalid input");
        break;
    }
    return 0;
}