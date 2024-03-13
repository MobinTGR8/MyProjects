/*--------INVESTMENT PROBLEM---------*/
#define PERIOD 10
#define PRINCIPAL 5000.00
/*--------MAIN PROGRAM BEGINS--------*/
main()
{/*-------DECLARATION STATMENTS----------*/
    printf("ID:2102064\n\n");
    int year;
    float amount,value,inrate;
/*--------ASSIGNMENT STATEMENT-----------*/
    amount=PRINCIPAL;
    inrate=0.11;
    year=0;
/*--------COMPUTATION STATEMENT-----------*/
/*--------COMPUTATION USING While LOOP------*/
    while(year<=PERIOD)
    {
        printf(" %2d        %8.2f\n",year,amount);
        value=amount+inrate*amount;
        year=year+1;
        amount=value;
    }
/*--------While LOOP ENDS-----*/
}
/*---------PROGRAM ENDS---------*/
