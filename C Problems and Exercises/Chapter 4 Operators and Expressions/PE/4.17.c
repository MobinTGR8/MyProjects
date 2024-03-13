#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int data;

    printf("Enter data to shift left by 2 bits: ");
    scanf("%d", &data);

    data = data << 2;

    printf("Data shifted by 2 bits: %d", data);

    return 0;
}
