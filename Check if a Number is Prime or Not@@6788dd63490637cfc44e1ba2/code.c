#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);

    

    if(a<=1){
        printf("Neither prime nor composite");
    }
    else{

        for(i=2;i<a;i++){
            if(a%i==0){

            
        
        printf(" Not Prime");
        return 0;
            }
        }
        printf("Prime");
    }
    return 0;
}