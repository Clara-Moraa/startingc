#include<stdio.h>

int main()
{
    /**lets try a format specifier
     * in this case of floats we will add a decimal before the percentage
    
    */
float item1=78.9;
float item2=65.999;
float item3=7.99;

printf("The price of item1: ksh%.3f\n",item1);
printf("The price of item2: ksh%.3f\n",item2);
printf("The price of item3: ksh%.3f\n",item3);


    return 0;
}