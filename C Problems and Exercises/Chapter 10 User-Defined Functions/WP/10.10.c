void stat(void);
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
   	int i;
    for(i = 1; i <= 3; i++)
      stat();
}
void stat(void)
{
     static int x = 0;

     x = x + 1;
     printf("x = %d\n", x);
}
