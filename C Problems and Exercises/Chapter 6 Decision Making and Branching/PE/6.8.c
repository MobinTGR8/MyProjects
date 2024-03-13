#include<stdio.h>
void main()
{
    printf("ID:2102064\n\n");
    int ch, pamnt, p, dis;
    printf("Press 1 for mill cloth\nPress 2 for handloom item\n");
    printf("\nPress 0 for End\n");

    input:
        scanf("%d", &ch);
        printf("Enter purchase amount\n");
        scanf("%d", &pamnt);
        if(ch == 0)
            goto end;
        switch(ch)
        {
            case 1: if(pamnt <= 100)
            dis = 0;
            else if(pamnt <= 200)
                dis = pamnt * 0.075;
            else
                if(pamnt > 300)
                dis = pamnt * 0.10;
            break;
            case 2: if (pamnt <= 100)
            dis = pamnt * 0.05;
            else if(pamnt * 0.075);
            else
            if(pamnt <= 300)
            dis = pamnt * 0.10;
            else
            if(pamnt > 300)
            dis = pamnt * 0.15;
            break;

            default : printf("Your choice is Enter");
            goto end;
        }
        p = pamnt - dis;
        printf("You have to pay %d", p);
        goto input;
        end:
        printf("Welcome");
        return 0;
}
