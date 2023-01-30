#include <stdio.h>

int main() {
    char *str;
    int length = 0;

    printf("Input a string: ");
    scanf("%s", str);

    while (*str != '\0') {
        length++;
        str++;
    }

    printf("The length of the given string is: %d\n", length);

    return 0;
}
