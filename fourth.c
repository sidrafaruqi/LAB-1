#include <stdio.h>
#include <stdlib.h>

void convert(int x) {
    if (x > 0) {
        convert(x / 2);
        printf("%d", x % 2); }
}

int main() {

    int Dnumber;
    printf("Enter a decimal number: ");
    scanf("%d", &Dnumber);

    printf("THE BINARY EQUIVALENT IS: ");

    if (Dnumber == 0) {
        printf("0");}
    else {
        convert(Dnumber);}

}

