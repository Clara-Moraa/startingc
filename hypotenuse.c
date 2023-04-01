#include<stdio.h>
#include<math.h>
/**lets find the hypotenuse of a tringle

*/
int main()

{
double A;
double B;
double C;

printf("Enter side a : ");
scanf("%lf", &A);

printf("Enter side b : ");
scanf("%lf", &B);

C=sqrt(A*A+B*B);

printf("The hypotenuse of the tringle is %lf\n",C);




    return 0;
}