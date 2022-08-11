// Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include <stdio.h>
void merge_array(int[], int[], int);
int main()
{
    int n, x;
    printf("Enter the value of n:");
    scanf("%d", &n);
    x = 2 * n;
    int a[n], b[n];
    printf("Enter the value of 1 array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nEnter the value of 2 array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", b[i]);
    }
    merge_array(a, b, x);

    return 0;
}
void merge_array(int a[], int b[], int x)
{
    int c[x];
    int p,temp, q;
    p = (x / 2);
     printf("\nMerging the 1[] and 2[]:\n");
    for (int i = 0; i < x; i++)
    {   if(i<p){
        c[i] = a[i];
        printf(" %d", c[i]);
    }
        else
        {
            c[i] = b[i-p];
            printf(" %d", c[i]);
        }
    }
     printf("\nMerged Array sorted in descending order : \n");
      for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (c[j] > c[i])
            {
                temp = c[i];
            c[i] = c[j];
                c[j] = temp;
            }
        }
        printf("%d ", c[i]);
    } 
}