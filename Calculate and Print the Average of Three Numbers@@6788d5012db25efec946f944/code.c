#include<stdio.h>
int main(){
    int a,b,c;
    float average;
    scanf("%d %d %d",&a,&b,&c);

    average=(a+b+c)/3;

    printf("Average: %.2f",a,b,c,average);

    return 0;
}