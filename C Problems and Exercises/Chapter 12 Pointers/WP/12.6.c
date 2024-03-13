void exchange(int *, int *);	    /* prototype */
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
       int  x, y;
       x = 100;
       y = 200;
       printf("Before exchange  : x = %d   y = %d\n\n", x, y);
       exchange(&x,&y);     	/* call */
       printf("After exchange   : x = %d   y = %d\n\n", x, y);
}
exchange (int *a, int *b)
{
       int t;
       t = *a;    /* Assign the value at address a to t */
       *a = *b;   /* put b into a */
       *b = t;    /* put t into b */
}
