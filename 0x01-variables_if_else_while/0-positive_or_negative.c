<<<<<<< HEAD
<<<<<<< HEAD

=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

>>>>>>> 02239b91e07310037aeb3f8df22717d319d27cf2
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
<<<<<<< HEAD
>>>>>>> 9b37bab9359a520bc821cff2227bae708ba9429b
=======
>>>>>>> 02239b91e07310037aeb3f8df22717d319d27cf2
