#include "mylib1.h"
int getParity(unsigned int n)
{
	int parity = 0; //initailizing variable to 0
	while (n)
	{
		parity = !parity;
		n	 = n & (n - 1);//to get the binary form of the given input number
	}
	return parity;
}
