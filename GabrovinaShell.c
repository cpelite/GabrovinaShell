#include <stdio.h>

int shellbase(void) {

    //declaring variable
    int commchoice;

    //Dispaying start up message and information.
    printf("GabrovinaShell v0.0.1 initialized! \nPress key to continue.");
    printf("ATTENTION: GabrovinaShell does use commands, which are designated by numbers. A list of commands will be displayed after that message. Press a key to continue.");
    getchar();

    //Displaying available commands.
    printf("The following commands are available: \n1 - prints some prose, 2 - shows information about the shell. \nChoose a command to continue.");
    scanf_s("%d", &commchoice);

    if (commchoice == 1)
        printf("Lorem Ipsum dolor sit amet.");
        //trick to stop further execution of program
        getchar();

    if (commchoice == 2)
        printf("GabrovinaShell v0.0.1 \nDeveloper: CPElite / ZlatinaDev");
        printf("Written using: plain old C, although i do not really know what i'm doing here.");
        //trick to stop further execution of program
        getchar();

    //return control to main function, which in turn allows the call of other functions.
    return 0;


}

int main()
{
    printf("Initializing GabrovinaShell. \nPress key to continue.");
    //waiting for input
    getchar();
    //Jumping to shell
    shellbase();
    getchar();
    return 0;
    
}