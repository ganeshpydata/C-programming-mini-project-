
#include <stdio.h>
#include <math.h>

int main(void) {
    int choice;
    double a, b, result;

    do {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square root\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Logarithm (base 10)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }

        if (choice == 0) {
            printf("Calculator closed.\n");
            break;
        }

        /* Operations requiring two numbers */
        if (choice >= 1 && choice <= 6) {
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Invalid number input.\n");
                return 1;
            }
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                if (b == 0)
                    printf("Error: Division by zero.\n");
                else
                    printf("Result = %.2lf\n", a / b);
                break;

            case 5:
                if (b == 0)
                    printf("Error: Modulus by zero.\n");
                else
                    printf("Result = %d\n", (int)a % (int)b);
                break;

            case 6:
                printf("Result = %.2lf\n", pow(a, b));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0)
                    printf("Error: Square root of a negative number is not real.\n");
                else
                    printf("Result = %.2lf\n", sqrt(a));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.4lf\n", sin(a * M_PI / 180.0));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %.4lf\n", cos(a * M_PI / 180.0));
                break;

            case 10:
                printf("Enter a positive number: ");
                scanf("%lf", &a);
                if (a <= 0)
                    printf("Error: Logarithm requires a positive number.\n");
                else
                    printf("Result = %.4lf\n", log10(a));
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
