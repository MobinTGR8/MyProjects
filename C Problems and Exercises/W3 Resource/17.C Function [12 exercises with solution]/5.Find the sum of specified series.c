#include<stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}
float calculateSeriesSum()
{
    float sum = 0.0;
    for (int i = 1; i <= 5; i++)
    {
        sum += (float)factorial(i) / i;
    }
    return sum;
}
int main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    float seriesSum = calculateSeriesSum();
    printf("Function : find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
    printf("Sum of the series: %.2f\n", seriesSum);

    return 0;
}

