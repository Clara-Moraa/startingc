#include<stdio.h>
#include<ctype.h>

int main()
{
char unit;
float temp;

printf("\nIs the temperature (C)or (F)\n");
scanf("%c", &unit);

unit=toupper(unit); /*C is case sensitive,the touppet changes the value entered if its lower case to uppercase*/

if(unit=='C')
{
    printf("\nEnter the celcius: \n");
    scanf("%f", &temp);
    temp=(temp*9/5)+32;
printf("\nThe temperature in celcius is : %.2f\n",temp);
}
else if (unit=='F')
{
    printf("\nEnter the temperature in Farenheit: \n");
    scanf("%f", &temp);
    temp=(temp-32)*5/9;
    printf("\nThe temperature in farenheit is : %.2f\n",temp);
}

else
{
    printf("\nEnter appropriate reading\n");
}




    return 0;
}