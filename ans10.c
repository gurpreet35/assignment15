#include <stdio.h>
int frequency(int arr[], int n1);
int main()
{
    int a[10], i, n1;
    printf("enter a no of elements in array  : ");
    scanf("%d", &n1);
    printf("enter %d numbers : \n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    frequency(a, n1);
    return 0;
}
int frequency(int arr[], int n1)
{
    int temp, i, count, flag, flag1, j;

    for (i = 0; i < n1; i++)
    {
        count = 0;
        flag = 0;
        for (j = i + 1; j < n1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;

                count++;
            }
        }
        if (flag == 1)
        {
            printf("\nthe frequency of %d = %d \n",arr[i], count + 1);
        }

        else
        {
            flag1 = 0;
            for (j = 0; j < n1; j++)
            {
                if (i != j)
                {
                    if (arr[i] == arr[j])
                    {
                        flag1 = 1;
                    }
                }
            }
            if (flag1 == 0)
            {
                printf("\nthe frequency of %d is 1\n",arr[i]);
            }
        }
    }
}