#include <stdio.h>
#include <math.h>

int main() {
    int x, n, choice;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter choice (1-Pow, 2-Add, 3-Sub, 4-Mul, 5-Div): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Pow(%d, %d) = %lf\n", x, n, pow(x, n));
            break;
        case 2:
            printf("Add(%d, %d) = %d\n", x, n, x+n);
            break;
        case 3:
            printf("Sub(%d, %d) = %d\n", x, n, x-n);
            break;
        case 4:
            printf("Mul(%d, %d) = %d\n", x, n, x*n);
            break;
        case 5:
            printf("Div(%d, %d) = %lf\n", x, n, (double)x/n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
