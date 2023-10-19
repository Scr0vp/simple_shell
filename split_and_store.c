#include "shell.h"
/**
 * split_and_store - Splits a string into substrings and stores them in an array
 * @instruction: The input string to be split
 * @sequence: The array to store the substrings
 *
 * Return: The number of substrings stored in the array
 */
int split_and_store(char *instruction, char *sequence[])
{
    int aggregate = 0;
    char *sub_string;
    char *delim = " \n";

    sub_string = strtok(instruction, delim);

    while (sub_string) {
        sequence[aggregate++] = sub_string;
        sub_string = strtok(NULL, delim);
    }

    sequence[aggregate] = NULL;

    return aggregate;
}
