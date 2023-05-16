# Project Title

"GabrovinaShell" is a simple shell written in C. It does not currently have a lot of commands, but I am working on adding more commands. It has two modes, a normal mode and a so-called "administrative mode". In administrative mode, access to the file system should also be possible sooner or later.

# Commands (non-administrative mode)

Commands are represented by numbers because of the easier manageability (at least for me as a beginner). The following commands are currently available:

1 - prints some text.

2 - shows info about the shell.

3 - starts the built-in calculator.

4 - shows a list of commands.

5 - cleans the screen.

60 - starts the administrative mode.

61 - exits the shell.

# Commands (administrative mode)

Just like in the normal mode, the commands are represented by numbers. The following commands are currently implemented:

10 - displays a short text to show that the administrative mode is active. 

20 - displays a short help. 

30 - displays the current directory.

99 - exits the administrative mode and returns to the normal mode.