#include<stdio.h>
/*in the switch statement is a shortcut of using many if else statements
*/

int main(){

char grade;

printf("Enter your semester grades: \n");
scanf("%c", &grade);

switch (grade) /*'grade is the input that is supposed to be executed*/
{
case 'A': /* this 'A' is what the user is supposed to input*/
    printf("Excellent!\n"); /* if the condition entered is true then this wil be executed*/
    break; /* take a break befre going to the next function it helps in exiting out of the switch*/
    case 'B':
    printf("Very good\n");
    break;

default:
printf("Enter valid grade\n");
    break;
}




    return 0;
}