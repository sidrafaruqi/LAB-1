#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Type the height of the rectangle: \n");
    scanf("%f", &height);

    float width;
    printf("Type the width of the rectangle: \n");
    scanf("%f", &width);


    printf("The perimeter of the rectangle is: %.2f\n", 2*(height+width));
    printf("The area of the Rectangle is: %.2f\n", height*width);

    }
