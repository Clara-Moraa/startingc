#include<stdio.h>
/** if statements are condition that we ask in this case its a boolean

*/
int main()
{
int age;
char name[34];

printf("\nEnter your age: ");
scanf("%d",&age);

/*if the input is false the program will skip this block of code*/

if (age<=18)
{
    printf("\nYou should be in school\n");
}




    return 0;
}