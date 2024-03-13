struct  personal
{
       char  name[20];
       int   day;
       char  month[10];
       int   year;
       float salary;
};
main()
{
       printf("Name: MD. Mobin Haque\nID:2102064\n\n");
       struct personal person;
       printf("Input Values\n");
       scanf("%s %d %s %d %f",
                 person.name,
                &person.day,
                 person.month,
                &person.year,
                &person.salary);
       printf("%s %d %s %d %f\n",
                 person.name,
                 person.day,
                 person.month,
                 person.year,
                 person.salary);
}
