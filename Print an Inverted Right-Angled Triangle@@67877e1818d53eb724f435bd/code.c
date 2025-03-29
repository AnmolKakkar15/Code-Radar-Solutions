// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",a);
    for(int b=a; b>=1; b--){
        for(int c=b; c<=b; b++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}