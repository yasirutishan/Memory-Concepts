#include <stdio.h>
int main()
{
int A,B,temp;
printf("Enter a number for 'A' : ");
scanf("%d",&A);
printf("Enter a number for 'B' : ");
scanf("%d",&B);
temp=A;
A=B;
B=temp;
printf("Now, A = %d\t B = %d\n",A,B);
}
