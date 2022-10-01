#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter rows : ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (j = 1; j < i; j++)
        {
            if (j == i - 1 || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
