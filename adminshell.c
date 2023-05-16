#include "adminshell.h"

void admshellinit(void) {
    printf("Attention! Administrative functions are not properly implemented yet, there are quite certainly severe bugs!");
    printf("\nType 1 to continue, type 2 to unload administrative functions.");
    int admchoice;
    scanf_s("%d", &admchoice);
    if (admchoice == 1) {
        admshellmain();
    }

    else {
        printf("Unloading administrative functions.");
        shellmain();
    }
}

void admshellstartmessage(void) {
    printf("Administrative functions have been loaded correctly!");
    admshellmain();
}

void admshellhelp() {
    printf("\nAdministrative functions do work similiar to the normal functions of the shell. Numbers are used to choose the program you want to call.");
    printf("\n10 - shows a simple message to confirm that administrative functions have been loaded correctly. \n20 - displays this menu. \n30 - Gets current working directory.");
    admshellmain();
}

void getcurrdir() {
    printf("I'm sorry, but this command is not implemented yet.");
    admshellmain();
}

void admshellmain(void)
{
    int admfunctchoice;
    printf("\n[adm > gabsh]");
    scanf_s("%d", &admfunctchoice);

    if (admfunctchoice == 10) {
        admshellstartmessage();
    }

    else if (admfunctchoice == 20) {
        admshellhelp();
    }

    else if (admfunctchoice == 30) {
        getcurrdir();
    }

    else if (admfunctchoice == 99) {
        printf("Unloading administrative functions.");
        shellmain();
    }

    else {
        printf("Command not recognized. Type 20 for a list of valid commands.");
        admshellmain();
    }

}