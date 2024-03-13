#include<stdio.h>
#include<conio.h>
void main()
{
   printf("ID:2102064\n\n");
   char ch;
   printf("Enter:\nm for Monday\ntu for Tuesday\nw for Wednesday\nth for Thursday\nf for Friday\nsa for Saturday\nsu for Sunday :\n");
   scanf("%c", &ch);
    switch(ch)
    {
        case 'm':
        case 'M':
            printf("monday");
            break;
        case 'tu':
        case 'Tu':
            printf("tuesday");
            break;
        case 'w':
        case 'W':
            printf("wednesday");
            break;
        case 'th':
        case 'Th':
            printf("thursday");
            break;
        case 'f':
        case 'F':
            printf("friday");
            break;
        case 'sa':
        case 'Sa':
            printf("saturday");
            break;
        case 'su':
        case 'Su':
            printf("sunday");
            break;
        default:
            printf("Wrong input");
            break;
    }
    getch();
}

