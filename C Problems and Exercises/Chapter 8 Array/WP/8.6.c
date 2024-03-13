main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int i, j, car;
    int frequency[5][5] = {{0},{0},{0},{0},{0}};
    char city;
    printf("For each person, Enter the city code\n");
    printf("followed by the car code.\n");
    printf("Enter the letter X to indicate end.\n");

    for(i = 1; i < 100; i++)
    {
        scanf("%c", &city);
        if(city == 'X')
            break;
        scanf("%d", &car);
        switch(city)
        {
            case 'B' : frequency[1][car]++;
                        break;
            case 'C' : frequency[2][car]++;
                        break;
            case 'D' : frequency[3][car]++;
                        break;
            case 'M' : frequency[4][car]++;
                        break;
        }
    }
    printf("\n\n");
    printf("POPULARITY TABLE\n\n");
    printf("_________________________________________________\n");
    printf("City       Ambassador  Fiat  Dolphin  Maruti\n");
    printf("_________________________________________________\n");
    for(i = 1; i <= 4; i++)
    {
        switch(i)
        {
            case 1 : printf("Bombay     ");
            break;
            case 2 : printf("Calcutta   ");
            break;
            case 3 : printf("Delhi      ");
            break;
            case 4 : printf("Madras     ");
            break;
        }
        for(j = 1; j <= 4; j++)
            printf("%7d", frequency[i][j]);
        printf("\n");
    }
    printf("________________________________________________\n");
}
