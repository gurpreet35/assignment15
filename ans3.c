//  Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
int sort(int []);
int n;
int main()
{
    int a[10], i;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    printf("Enter the value in a array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(sort(a)==0){
    printf("The sorting list of array is :");
    for(i=0;i<n;i++){
    printf(" %d",a[i]);
    }
    }
    return 0;
}
int sort(int a[]){
    int i;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < (n-1); j++)
        {
            int temp;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}