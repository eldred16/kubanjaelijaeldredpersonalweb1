#include<stdio.h>
int main(void){
    int x, y, z;
    /*prompt the user to enter the first number*/
    printf("Enter any number between 1 and 100:");
    scanf("%d", &x);

     /*prompt the user to enter second number*/
     printf("Enter any number between 1 and 100:");
     scanf("%d", &y);

     z = x+y;
     printf("%d", z);

     return 0;

}