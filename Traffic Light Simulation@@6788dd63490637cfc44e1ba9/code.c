#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);

if(a=='R'){
    printf("Stop");
}
else if(a=='G'){
    printf("Slow Down");
}

else{
    printf("Invalid input");
}
return 0;
}