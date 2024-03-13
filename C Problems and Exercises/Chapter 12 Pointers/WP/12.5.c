int main()
{
       printf("Name: MD. Mobin Haque\nID:2102064\n\n");
       char  *name;
       int   length;
       char  *cptr = name;
       name  = "DELHI";
       printf ("%s\n", name);
       while(*cptr != '\0')
       {
           printf("%c is stored at address %u\n", *cptr, cptr);
           cptr++;
       }
       length = cptr - name;
       printf("\nLength of the string = %d\n", length);
}
