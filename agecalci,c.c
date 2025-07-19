//Age Calculator
//Input: DOB Output: Age in years

#include <stdio.h>
int main() {
    int birthYear, currentYear, age;
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    age = currentYear - birthYear;

    if (age < 0) {
        printf("Invalid input. Please enter the year correctly\n");
    } else {
        printf("You are %d years old.\n", age);
    }

    return 0;
}
