#include<stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int item_codes[] = {101, 102, 103, 104};
    int quantities[] = {50, 25, 10, 100};
    char locations[][20] = {"A-101", "B-203", "C-306", "D-410"};

    printf("%-10s%-15s%-10s\n", "Item Code", "Quantity", "Location");
    printf("-------------------------------------\n");

    for(int i = 0; i < sizeof(item_codes)/sizeof(item_codes[0]); i++)
    {
        printf("%-10d%-15d%-10s\n", item_codes[i], quantities[i], locations[i]);
    }
    return 0;
}

