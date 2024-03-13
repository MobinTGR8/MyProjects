void function1(void);
void function2(void);
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
        int m = 1000;
        function2();

        printf("%d\n",m);	/* Third output */
}
void function1(void)
{
        int m = 10;

        printf("%d\n",m);	/* First output */
}


void function2(void)
{
        int m = 100;
        function1();
        printf("%d\n",m);	/* Second output */
}
