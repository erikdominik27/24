#include <stdio.h>

int conversion(int celsius);

int main()
{
    int celsius;
    printf("Enter a degree in celsius: ");
    scanf("%d", &celsius);
    printf("The degree you entered in fahrenheit is: %d", conversion(celsius));
}

int conversion(int celsius)
{
    return (celsius * 9/5) + 32;
}