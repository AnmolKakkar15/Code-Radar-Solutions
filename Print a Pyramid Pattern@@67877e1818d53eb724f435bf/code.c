#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (i=1; i<=a; i++){
        for(j=1; j<= a-i; j++){
            printf(" ");
        }
        for (k=1; k<=(2*i-1);k++ ){
            printf("*");
        }
        print("\n");

    }
    return 0;
}
