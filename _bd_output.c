#include "shell.h"
/**
 * _bd_output - reponsible for writing to stdout
 * @transmit_data: represents data that nesds to be written
 * Return: always void
 */
void _bd_output(const char *transmit_data)
{
	write(STDOUT_FILENO, transmit_data, _bd_strlen(transmit_data));
}
