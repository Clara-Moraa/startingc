#include<stdio.h>
#include<math.h>

/*
i will calculate the circumference of a circle using these function
*/

int main()

{
const double PI=3.142; //im making pi is such a way nobody can change it

double radius;
double circumference;

printf("Enter radius of the circle\n");
scanf("%lf",&radius);
circumference=2*PI*radius;

printf("The circumference is %lf\n",circumference);
    return 0;
}