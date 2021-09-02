# Memory-Concepts
Memory Concepts, Data Input &amp; Output , Primitive Data Types

Practical 1

Write a C program for each of the following question


1. Display your name and school name in two separate lines

#include <stdio.h>
int main()
{
    printf("My name is Diluk Yuvin Perera\n");
    printf("My school is Dharmapala Vidyalaya Pannipitiya\n");
    return 0;
}

2. Display the following output using printf() statements

*
**
***
****
*****

#include <stdio.h>
int main()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    return 0;
}

3. Input values for int,float,double and char data types and display the value of each of the variable.

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

4. Input two integers and display the total

#include<stdio.h>
int main(){
    int a,b,tot;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    tot=a+b;
    printf("Total : %d\n",tot);
    return 0;
}

5. Input two numbers with decimals and display the average with decimals 

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

6. Input a student name, birth year and display student name with age.

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



7. Input two numbers, swap the values and display the output. ( Before swap and after swap)

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

8. Execute the following code and analyze the output.

#include<stdio.h>
main()
{
	printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);
	printf("Just print the percentage sign %%\n", 10);
}

Result : 

The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14
Hexadecimal: ff
Octal: 377
Unsigned value: 150
Just print the percentage sign %

• For second number  the max number of digits is 4. If less than 4 , the unfilled digit spaces are filled with zeros.
• % u is for unsigned integers . Cant have -ve value. Gives a bogus value when  we give a negative value
• For the Hexadecimal %x is used. The decimal is converted to hexadecimal when being displayed 
• For  octal %o is used. The decimal is converted to the octal and displayed.
• To Print a % a single % is not enough . Two %% is needed.
• %i is used for integers. In scanf it can recognise 0 (octal) or 0x (hexadecimal) while %d cannot scan them.
