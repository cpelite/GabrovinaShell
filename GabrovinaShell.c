#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "comms.h"

char version[] = "v1.0";

int shellinit() {
    printf("[GABROVINASHELL - ");
    printf("%s", version);
    printf("]");
    printf("\nPress a key to continue.");
    _getch();
    shellmain();
}

int shellmain()
{
    int choice;
    printf("\n[user > gabsh]");
    scanf_s("%d", &choice);

    if (choice == 1) {
        prose();
    }

    else if (choice == 2) {
        info();
    }
    
    else if (choice == 3) {
        calc();
    }

    else if (choice == 4) {
        commlist();
    }

    else if (choice == 5) {
        system("@cls || clear");
        main();
    }

    else if (choice == 60) {
        admshellinit();
    }

    else if (choice == 61) {
        terminus();
    }

    else if (choice == 99) {
        errorhandlertest();
    }

    else {
        printf("Command not recognized. Type 4 for a list of valid commands.");
    }
}

int main() {
    shellinit();
}