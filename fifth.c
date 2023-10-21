#include <stdio.h>
#include <stdlib.h>

void series(int x, int a, int b){
    printf("%d ", a+b);
    a = a + b;
    b = a - b;
    if (a+b <=x){
        series(x, a, b);}
    }


int main()
{   int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("THE FIBONACCI SERIES IS: 1 1 ");

    if (n==1){
        // This block is empty
    }
    else{
    series(n, 1 ,1 );}
}
