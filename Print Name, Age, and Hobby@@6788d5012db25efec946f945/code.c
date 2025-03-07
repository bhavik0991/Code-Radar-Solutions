#include<stdio.h>
int main(){
    char name[100];
    int age;
    char hobby;
    printf("Name:");
    scanf("%s",&name);
    printf("Age:");
    scanf("%d",&age);
    printf("Hobby:");
    scanf("%c",&hobby);

    printf("Name:%s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby:%c",hobby);

    return 0;
}