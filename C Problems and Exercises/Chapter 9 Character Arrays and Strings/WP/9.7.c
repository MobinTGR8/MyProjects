 main()
 {
     printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    char c;
    printf("\n\n");
    for(c = 65; c <= 122; c = c + 1)
    {
        if(c > 90 && c < 97)
        continue;
        printf("|%4d - %c ", c, c);
    }
    printf("|\n");
}
