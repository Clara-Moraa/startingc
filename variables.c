#include<stdio.h>
/**variables-theyare allocated memory to store a value
 
 * we reffer to a variables name to access the stored value it contains
 
 * but the vriable need to be declaired what it is

*/
int main()
{
int x; /*variable declaration*/
x=23; /*initialization*/
int y=45; /*Both initialization and declaration*/
char grade='B'; /*the character stores a single character*/
char name[]="Clara";
float gpa= 2.25;
 /*in c we dont hve strings we just use Char i which we store arrays in there*/
/**
 * displaying a variable into output
 * % is a place holder
 * d is a decimal
*/
printf("Hello %s\n",name);
printf("My age is %d\n",x);
printf("Your grade is %c\n",grade);
printf("Your gpa is %f\n",gpa);
printf("my number starts with %d\n",y);
    return 0;
}