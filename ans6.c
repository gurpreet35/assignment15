// Write a function in C to read n number of values in an array and display it in reverse 
// order.
#include<stdio.h>
int func_reverse(int []);
int main(){
int a[5];
printf("Enter the value of array:");
for (int i = 0; i < 5; i++)
{
scanf("%d",&a[i]);    
}
for (int i = 0; i < 5; i++)
{
printf(" %d",a[i]);    
}
func_reverse(a);
    return 0;
}
int func_reverse(int b[]){
    printf("\nArray in reverse order:");
for (int i = 4; i >=0; i--)
{
printf(" %d",b[i]);    
}
}