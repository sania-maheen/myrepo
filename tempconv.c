//Temperature Converter 
#include <stdio.h>

int main() {
    int ch;
    float temp;

    printf("1. C to F\n2. F to C\n");
    printf("Choose: ");
    scanf("%d", &ch);

    printf("Enter temp: ");
    scanf("%f", &temp);

    if (ch == 1)
        printf("Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
    else
        printf("Celsius: %.2f\n", (temp - 32) * 5 / 9);

    return 0;
}
