#include <stdio.h>
#include <stdlib.h>

int prose(void) {


    //Dispaying start up message and information.
    printf("Lorem ipsum dolor sit amet.");

    //return control to main function, which in turn allows the call of other functions.
    main();
}

int info(void) {
    printf("GabrovinaShell v0.0.2 \nDeveloper: CPElite / ZlatinaDev");
    printf("Written using: plain old C, although i do not really know what i'm doing here.");
    //trick to stop further execution of program
    main();
}

int calc()
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

int commlist(void) 
{
    printf("GabrovinaShell uses numbers to call functions, at least for now.");
    printf("The following commands are implemented at the current moment: 1 - writes some prose. \n2 - shows some information. \n3 - opens the calculator. \n5 - clears the screen.");
    main();
}

int main()
{
    int choice;
    printf("[GABROVINASHELL] - Please enter a command: ");
    scanf_s("%d", &choice);
    if (choice == 1)
        prose();

    if (choice == 2)
        info();

    if (choice == 3)
        calc();

    if (choice == 4)
        commlist();

    if (choice == 5)
        system("@cls || clear");
        main();

    return 0;
    
}