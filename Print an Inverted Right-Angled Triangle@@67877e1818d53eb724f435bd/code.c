#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a; i>=1; i--){
        for(int c=i; c<=i; c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}