#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d [15];
    printf("Enter an integer value : ");
    scanf("%d",&a);
    printf("Enter a float value : ");
    scanf("%f",&b);
    printf("Enter a double value : ");
    scanf("%lf",&c);
    printf("Enter a char value : ");
    scanf("%s",&d);
    printf("%d  %f  %f  %s",a,b,c,d);
    return 0;
}
