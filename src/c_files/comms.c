#include "comms.h"

char ver2[] = "v1.0";

//regular functions start here, too lazy to figure out how to move to different files...
void prose(void) {


    //Dispaying start up message and information.
    printf("Lorem ipsum dolor sit amet.");

    //return control to main function, which in turn allows the call of other functions.
    shellmain();
}

void info(void) {
    printf("\n[GABROVINASHELL - ");
    printf("%s", ver2);
    printf("]");
    printf("\n");
    printf(" --- CPElite, 2023 ---");
    //trick to stop further execution of program
    shellmain();
}

void calc()
{
    char ch;
    double a, b;
    while (1) {
        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf_s(" %c", &ch);
        // to exit
        if (ch == 'x')
            main();
        printf("Enter two first and second operand: ");
        scanf_s("%lf %lf", &a, &b);
        // Using switch case we will differentiate
        // operations based on different operator
        switch (ch) {
            // For Addition
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
            // For Subtraction
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
            // For Multiplication
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
            // For Division
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
            // If operator doesn't match any case constant
        default:
            printf("Error! please write a valid operator\n");
        }
    }
}

void commlist(void)
{
    printf("GabrovinaShell uses numbers to call functions, at least for now.");
    printf("The following commands are implemented at the current moment: 1 - writes some prose. \n2 - shows some information. \n3 - opens the calculator. \n4 - shows this list. \n5 - clears the screen. \n60 - loads administrative commands. \n61 - terminates the shell. \n99 - calls the test function of the error handler.");
    shellmain();
}

void terminus(void) {
    printf("Terminating shell. Press a key to continue.");
    _getch();
    exit(0);
}