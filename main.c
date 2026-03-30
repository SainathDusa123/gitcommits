#include<stdio.h>
#include "mul.h"

void mul(int m, int n);
// calculator
int main()
{
	int m =20 ,n= 10;
	printf("Summition of two number : %d\n",m+n);
	mul(m,n);
	sub(m, n);	
	mod(m , n);

	return 0;
}
