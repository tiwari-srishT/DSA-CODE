#include <stdio.h>
void main()
{

    int array[100], odd[100], even[100], i, num, swap = 0;
    printf("Enter the size of an array \n");

    scanf("%d", &num);
    printf("Enter the elements of the array \n");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    int k = 0;
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            even[k] = array[i];
            k++;
        }
    }

    int l = 0;
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd[l] = array[i];
            l++;
        }
    }

    //odd and even array separated
    // printf("odd unsorted array is\n");
    // for (i = 0; i < l; i++)
    // {
    //     printf("%d \t", odd[i]);
    // }
    // printf("\neven  unsorted array is\n");
    // for (i = 0; i < k; i++)
    // {
    //     printf("%d \t", even[i]);
    // }

    //-------------------sorting odd array----------------------------
    for (i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (odd[j] < odd[i])
            {
                swap = odd[j];
                odd[j] = odd[i];
                odd[i] = swap;
            }
        }
    }
    //-------------------sorting even array----------------------------
    for (i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (even[j] < even[i])
            {
                swap = even[j];
                even[j] = even[i];
                even[i] = swap;
            }
        }
    }

    printf("\nodd sorted array is\n");
    for (i = 0; i < l; i++)
    {
        printf("%d \t", odd[i]);
    }
    printf("\neven sorted array is\n");
    for (i = 0; i < k; i++)
    {
        printf("%d \t", even[i]);
    }
}
