#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

#define SEQUENCE_LENGTH 256

extern char **environ;

void _bd_output(const char *transmit_data);
void execute_command_sequence(char *sequence[]);
int split_and_store(char *instruction, char *sequence[]);
int fetch_instruction(void);
char *_bd_remove_newline(char *string, int longii);
size_t _bd_strlen(const char *string);
void present_prompt(void);

#endif /* SHELL_H */
