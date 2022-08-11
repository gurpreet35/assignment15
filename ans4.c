// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29]
#include <stdio.h>
void func_rotation(int, int[],int);
int main()
{
    int n, i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("ENter the value of array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("give the value  n of Rotation of array :");
    scanf("%d", &n);
    func_rotation(n,a,size);

    return 0;
}
void func_rotation(int n, int a[],int size)
{
    int choice;
    int i,j=0, temp[size], b[size],flag=0;
    printf("1.LEFT ROTATION");
    printf("\n2.RIGHT ROTATION");
    printf("\nChoose your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for ( i = 0; i < size; i++)
        {
            if(i<=n){
            temp[i]=a[i];
            }
        }
        for (i = n; i < size; i++)
        {
            printf(" %d",a[i]);
        }    
        for ( i =0; i <n; i++)
        {
            printf(" %d",temp[i]);
        } 
        break;

    case 2:
         for ( i = 0; i < size; i++)
        {
            if(i<=n){
            temp[i]=a[i];
            }
        }
        for (i = size-1; i>=n; i--)
        {
            printf(" %d",a[i]);
        }    
        for ( i =0; i <n; i++)
        {
            printf(" %d",temp[i]);
        } 
        break;
    default:
        break;
    }
}