#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//regular functions start here, too lazy to figure out how to move to different files...
int prose(void) {


    //Dispaying start up message and information.
    printf("Lorem ipsum dolor sit amet.");

    //return control to main function, which in turn allows the call of other functions.
    main();
}

int info(void) {
    printf("GabrovinaShell v0.0.3 \nDeveloper: CPElite / ZlatinaDev");
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

// regular functions end here.

// administrative functions start here.

int admshellinit(void) {
    printf("Attention! Administrative functions are not properly implemented yet, there are quite certainly severe bugs!");
    printf("\nType 1 to continue, type 2 to unload administrative functions.");
    int admchoice;
    scanf_s("%d", &admchoice);
    if (admchoice == 1) {
        admshellmain();
    }

    else {
        printf("Unloading administrative functions.");
        main();
    }
}

int admshellstartmessage(void) {
    printf("Administrative functions have been loaded correctly!");
    admshellmain();
}

int admshellhelp() {
    printf("\nAdministrative functions do work similiar to the normal functions of the shell. Numbers are used to choose the program you want to call.");
    printf("\n10 - shows a simple message to confirm that administrative functions have been loaded correctly. \n20 - displays this menu. \n30 - Gets current working directory.");
    admshellmain();
}

int getcurrdir() {
    printf("I'm sorry, but this command is not implemented yet.");
    admshellmain();
}

int admshellmain(void) 
{
    int admfunctchoice;
    printf("\n[adm > gabsh]");
    scanf_s("%d", &admfunctchoice);

    if (admfunctchoice == 10) {
        admshellstartmessage();
    }

    if (admfunctchoice == 20) {
        admshellhelp();
    }

    if (admfunctchoice == 30) {
        getcurrdir();
    }

    if (admfunctchoice == 99) {
        printf("Unloading administrative functions.");
        main();
    }

    else {
        printf("Command not recognized. Type 20 for a list of valid commands.");
        admshellmain();
    }

}
// administrative functions end here.

int main()
{
    int choice;
    printf("\n[GABROVINASHELL - v0.0.3]");
    printf("\n[user > gabsh]");
    scanf_s("%d", &choice);

    if (choice == 1) {
        prose();
    }

    if (choice == 2) {
        info();
    }
    
    if (choice == 3) {
        calc();
    }

    if (choice == 4) {
        commlist();
    }

    if (choice == 5) {
        system("@cls || clear");
        main();
    }

    if (choice == 60) {
        admshellinit();
    }

    if (choice == 61) {
        printf("Terminating. Press a key to exit GabrovinaShell.");
        _getch();
        return 0;

    }

    else {
        printf("Command not recognized. Type 4 for a list of valid commands.");
    }
}