#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int count = 0;
    int i;  

    printf("Enter some text: ");
    scanf(" %[^\n]", text);//The %[^\n] means: read everything until you find a newline (\n) character.As %s reads input only until the first space.

    for (i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
