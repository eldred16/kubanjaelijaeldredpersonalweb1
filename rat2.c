#include<stdio.h>
int main(void){

    float average;
    int x, y, z;

    /*prompt the user to enter the first average value*/
    printf("Enter the average marks:\n");
    scanf("%d%d%d", &x, &y, &z);

    average = (float)(x + y + z)/3;
    printf("average is = 2%f\n", average);
    

return 0;
}