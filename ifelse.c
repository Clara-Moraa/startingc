#include<stdio.h>
int main(){

int num;

printf("\nEnter number given:");
scanf("%d", &num);

/*if we have several conditions we could use else if statements */

if(num>=25)
{
printf("\nAccepted\n");

}
else{

    printf("\nNot accepted\n");
}

    return 0;
}