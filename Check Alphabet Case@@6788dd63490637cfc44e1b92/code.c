#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);

    if(c=='A'){
        printf("Uppercase");
    }
    else if(c=='a'){
        printf("Lowercase");
    }
    else{
        printf("Not an Alphabet");
    }
    return 0;
}