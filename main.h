#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;


char *get_linefunc(void);
char **splitter(char *line);
int _execute(char **cmd, char **argv);
void freearrays(char **array);


#endif
