struct invent
{
       char  *name[20];
       int   number;
       float price;
};
main()
{
    printf("Name: MD. Mobin Haque\nID:2102064\n\n");
      struct invent product[3], *ptr;
      printf("INPUT\n\n");
      for(ptr = product; ptr < product+3; ptr++)
        scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);
      printf("\nOUTPUT\n\n");
       ptr = product;
       while(ptr < product + 3)
       {
           printf("%-20s %5d %10.2f\n",
                    ptr->name,
                    ptr->number,
                    ptr->price);
           ptr++;
       }
}
