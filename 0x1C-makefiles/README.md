# C Makefiles
## Using C makefiles to automate recompilation of executable
## files if chamges are made to some files.

* makefiles in their simlpes forms have a target, dependancies and actions
** target - filename, or a command, but genereally the result of the action
** dependancies - files which are to be executed in the action
** actions - the commands to execute.

* so you can also use macros for makefiles which make it easier in case you make a change
  to the command
* To use the macros/variables use it within the parentheses or curly braces preceeded by a
  dollar sign ie. ${VARIABLE}
