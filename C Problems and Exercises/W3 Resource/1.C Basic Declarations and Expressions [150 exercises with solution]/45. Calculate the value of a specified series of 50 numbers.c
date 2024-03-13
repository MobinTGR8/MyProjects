#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
	float S = 0;
	int i;
	for(i = 1; i <= 50; i++)
	{
		S += (float)1/i;
    }
    printf("Value of S: %.2f\n", S);

	return 0;
}

