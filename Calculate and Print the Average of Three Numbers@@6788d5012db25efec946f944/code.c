// Your code here...
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    float avg;
    scanf("%d %d %d", &a,&b,&c);
    avg = (a+b+c)/3;
    printf("Average: %.2f", avg);
    return 0;
}