#include<stdio.h>
/**we are going to use the terminal to ask for input
 * we will use scanf() which is the inverse of print f it is used to read input

*/
int main()
{
int age;
char name[30];
printf("What is your name?\n",name);

//we can use fgets function to read any white spaces and we will not need the & to get the address of the operator
//fgets(name,30,stdin);  // we will have the name plus the length of the char we specifid and standard input
scanf("%s",&name);


printf("How old are you?\n ",age);


scanf("%d",&age); //& is the address of the operator

printf("You are %d years old\n",age);

printf("Hello %s ,you are %d years old\n",name,age);



    return 0;
}