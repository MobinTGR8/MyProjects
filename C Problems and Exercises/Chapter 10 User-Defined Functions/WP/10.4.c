main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
    int x,y;				/*input data */
	double power(int, int);	/* prototype declaration*/
	printf("Enter x,y:");
	scanf("%d %d" , &x,&y);
	printf("%d to power %d is %f\n", x, y, power (x,y));
}
double power (int x, int y)
{
	double p;
	p = 1.0 ; 		  /* x to power zero */

	if(y >= 0)
		while(y--)   /* computes positive powers */
		 p *= x;
	else
		while (y++)  /* computes negative powers */
		 p /= x;
		return(p);
}
