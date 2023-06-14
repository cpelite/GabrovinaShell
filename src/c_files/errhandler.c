#pragma once
#include "src/headers/errhandler.h"

void getcurrdirerror(void) {

	int currdirerr;
	printf("\nGabrovinaShell ran into an error whilst executing command 30.");
	printf("\nIt seems like, for some reason, the command was unable to get the current working directory.");
	printf("\nPlease acknowledge the error to continue. \n1 acknowledges the error, 2 terminates administrative mode, 3 terminates the shell entirely.");
	scanf_s("%d", &currdirerr);

	if (currdirerr == 1) {
		admshellmain();
	}

	else if (currdirerr == 2) {
		shellmain();
	}

	else if (currdirerr == 3) {
		terminus();
	}

}

void errorhandlertest(void) {

	int errhandlertest;
	printf("\nError handler has been succesfully loaded!");
	printf("\nNo further input required. \nPress 1 to continue if called from normal mode, 2 to continue if called from administrative mode.");
	scanf_s("%d", &errhandlertest);

	if (errhandlertest = 1) {
		shellmain();
	}

	else if (errhandlertest == 2) {
		admshellmain();
	}

}

void fwerror(void) {
	
	printf("\nError while writing to file!");
	printf("\nPress a key to return to the shell.");
	_getch();
	admshellmain();
	
}