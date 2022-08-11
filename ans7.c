//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
void func_duplicate(int [],int );
int main(){
int n;
printf("Enter size:");
scanf("%d",&n);
int a[n];
printf("Enter the value of array:");
for (int i = 0; i < n; i++)
{
scanf("%d",&a[i]);    
}
for (int i = 0; i < n; i++)
{
printf(" %d",a[i]);    
}
func_duplicate(a,n);
    return 0;
}
void func_duplicate(int a[],int size){
    int count=0;
for (int i = 0; i < size; i++)
{
    for (int j = i+1; j < size; j++)
    {
       if(a[i]==a[j]){
        count++;
       }
    }
    
}
    printf("\nA total number of duplicate elements in an array is %d",count);

}