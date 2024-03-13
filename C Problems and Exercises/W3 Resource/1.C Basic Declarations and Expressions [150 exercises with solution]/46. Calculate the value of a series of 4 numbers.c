#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
	double s = 0, j = 1, d, i;

	for(i = 1; i <= 7; i += 2)
    {
		d = (i/j);
		s += d;
		j = j * 2;
	}
    printf("Value of series: %.2lf\n", s);
    return 0;
}

