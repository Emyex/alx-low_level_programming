#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0 (sucess trial)
 */
int main(void)

{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/*
		 * if (n>0)
		  {prinf(%i is positive\n", n);}

		 else  if (n==0)
		 {printf(%i is zero\n", n);}
		 else if (n<0)
		 {printf (%i is negative\n", n);}
		 */
		return (0);
}
