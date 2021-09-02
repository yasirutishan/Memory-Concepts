#include<stdio.h>
int main(){
    int byear,age;
    char name [15];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your birth year : ");
    scanf("%d",&byear);
    age=2018-byear;
    printf("Name : %s  Age : %d\n",name,age);
    return 0;
}
