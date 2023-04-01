#include<stdio.h>
/*in this case we are playing with variables and practising inputs
*in this operation we could use if statements or a switch to perform our calculations since they are so many
*/

int main()
{
char operators;
double Num1;
double Num2;
double answ;

printf("\nEnter the operator (+,-,*,/,++,--\n");
scanf("%c", &operators);

printf("\nEnter the first number: \n");
scanf("%lf", &Num1);

printf("\nEnter the second  number: \n");
scanf("%lf", &Num2);

switch (operators)
{
case '+':
    answ=Num1+Num2;
    printf("The addition is: %.lf\n", answ);
    break;
case '-':
    answ=Num1-Num2;
    printf("The Substraction is: %.lf\n", answ);
    break;
case '/':
    answ=Num1/Num2;
    printf("The division is: %.lf\n", answ);
    break;
case '++':
    answ=Num1++;
    printf("The increment is: %.lf\n", answ);
    break;
case '--':
    answ=Num1--;
    printf("The addition is: %.lf\n", answ);
    break;



default:
printf("\nThat is not valid\n");
    break;
}

    return 0;
}