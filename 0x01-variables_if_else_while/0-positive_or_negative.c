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
		  {prinf(%d is positive\n", n);}

		 else  if (n==0)
		 {printf(%d is zero\n", n);}
		 else if (n<0)
		 {printf (%d is negative\n", n);}
		 */
		return (0);
}
