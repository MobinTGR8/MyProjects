#define COLMAX 10
#define ROWMAX 12
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int row, column, y;
    row = 1;
    printf("          MULTIPLICATION TABLE     \n");
    printf("____________________________________________\n");
    do
    {
        column = 1;
        do
        {
            y = row * column;
            printf("%4d", y);
            column = column + 1;
        }
        while(column <= COLMAX);
        printf("\n");
        row = row + 1;
    }
    while(row <= ROWMAX);
    printf("______________________________________________\n");

}


