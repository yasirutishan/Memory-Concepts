#include<stdio.h>
int main(){
    float no1,no2,avg;
    printf("Enter first number : ");
    scanf("%f",&no1);
    printf("Enter second number : ");
    scanf("%f",&no2);
    avg=(no1+no2)/2;
    printf("Average : %.3f\n",avg);
    return 0;
}
