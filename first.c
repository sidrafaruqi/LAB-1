#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myID;
    printf("Type your ID: \n");
    scanf("%d", &myID);

    float hours;
    printf("Type total hours worked: \n");
    scanf("%f", &hours);

    float amount;
    printf("Type the amount received per hour: \n");
    scanf("%f", &amount);


    printf("Your ID is: %d\n", myID);
    printf(" Your salary is:%.2f Rs\n", amount*hours);

    }
