#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2)
    {
    if (n1 >= n3)
        printf("%.2lf is the largest number.", n1);
    else
      printf("%.2lf is the largest number.", n3);
  }
  else
    {
    if (n2 >= n3)
      printf("%.2lf is the largest number.", n2);
    else
      printf("%.2lf is the largest number.", n3);
  }
    return 0;
}
