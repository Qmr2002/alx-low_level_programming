<<<<<<< HEAD
#include <stdio.h> 
/**main - prints *and that piece of art is useful* - Dora Korpar, 2015-10-19", 
 *  followed by a new line, to the standard error.
 *  Return: Always 1. 
 */ 


int main(void) 
{ 
	write(2, "and that piece of art is useful\"  -Dora Korpar, 2015-10-19\n", 59);
=======
#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

>>>>>>> 8d5eade935016d0538c28c73e34b9267d010e996
	return (1);
}
