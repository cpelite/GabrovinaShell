#include "adminshell.h"
#include <windows.h>
#include "errhandler.h"
#include <stdio.h>
#include <stdlib.h>

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
    printf("\n10 - shows a simple message to confirm that administrative functions have been loaded correctly. \n20 - displays this menu. \n30 - Gets current working directory. \n999 - calls the test function of the error handler.");
    admshellmain();
}

void getcurrdir() {
    TCHAR tszBuffer[MAX_PATH];
    DWORD dwRet; 

    dwRet = GetCurrentDirectoryA(MAX_PATH, tszBuffer);
    if (dwRet == 0) {
        printf("ERROR! Calling error screen!");
        getcurrdirerror();
    }

    else {
        printf("Current working directory is: \n");
        printf("%s", tszBuffer);
        admshellmain();
    }
}

void filewriter() {
    commnotimplemented();
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

    else if (admfunctchoice == 40) {
        filewriter();
    }

    else if (admfunctchoice == 99) {
        printf("Unloading administrative functions.");
        shellmain();
    }

    else if (admfunctchoice == 999) {
        errorhandlertest();
    }

    else {
        printf("\nCommand not recognized. Type 20 for a list of valid commands.");
        admshellmain();
    }

}