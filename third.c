#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Type your height in cm: \n");
    scanf("%f", &height);

    if (height<150) {
        printf("DWARF");}
    else if (height==150) {
        printf("AVERAGE");}
    else if (height>=165) {
        printf("TALL");}
}

