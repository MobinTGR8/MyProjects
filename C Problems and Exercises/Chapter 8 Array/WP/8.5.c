#define MAXGIRLS 4
#define MAXITEMS 3
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int value[MAXGIRLS][MAXITEMS];
    int girl_total[MAXGIRLS], item_total[MAXITEMS];
    int i, j, grand_total;

    printf("Input data\n");
    printf("Enter values, one at a time, row-wise\n\n");

    for(i = 0; i < MAXGIRLS; i++)
    {
        girl_total[i] = 0;
        for(j = 0; j < MAXITEMS; j++)
        {
            scanf("%d", &value[i][j]);
            girl_total[i] = girl_total[i] + value[i][j];
        }
    }
    for(j = 0; j < MAXITEMS; j++)
    {
        item_total[j] = 0;
        for(i = 0; i < MAXGIRLS; i++)
            item_total[j] = item_total[j] + value[i][j];
    }
    grand_total = 0;
    for(i = 0; i < MAXGIRLS; i++)
    {
        grand_total = grand_total + girl_total[i];
    }
    printf("\n GIRLS TOTAL\n\n");
    for(i = 0; i < MAXGIRLS; i++)
    {
        printf("salesgirl[%d] = %d\n", i + 1, girl_total[i]);
    }
    printf("\n ITEM TOTAL\n\n");
    for(j = 0; j < MAXITEMS; j++)
    {
        printf("Item[%d] = %d\n", j + 1, item_total[j]);
    }
    printf("\nGrand Total = %d\n", grand_total);
}
