#include<stdio.h>

int main()
{
/**arithmetic operators they take two operands and excute them we have:
 * addition +
 * substraction -
 * multiplication *
 * modulus % (the number that remains after division)
 * division /
 * increment ++
 * decrement --
*/
int x=30;
int y=7;
int a,b,c,d,e,f,g,h;
a=x+y;
b=x-y;
c=x*y;
d=x%y;
 e=x/y;
f=x++;
g=x--;

printf("Addition of a is %d\n",a);
printf("Substraction of b is %d\n",b);
printf("Multiplication of c is %d\n",c);
printf("Modulusof d is %d\n",d);
printf("Division of e is %.4f\n",e);
printf("increment of f is %d\n",f);
printf("decrement of g is %d\n",g);




return 0;
}