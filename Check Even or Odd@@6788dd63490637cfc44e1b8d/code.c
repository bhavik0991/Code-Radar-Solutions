#include <stdio.h>

int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);


if(a%2==0){
    printf("%d is even",a);
}
else{
    printf("%d is odd");
}

return 0;
}