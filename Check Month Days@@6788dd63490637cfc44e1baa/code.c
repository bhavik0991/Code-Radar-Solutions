#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if(a=='1'){
        printf("31");
    }
    else if(a=='2'){
        printf("28");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}