// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element.
#include<stdio.h>
int func_duplicate(int []);
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
func_duplicate(a);
printf("\nthe first occurrence of adjacent duplicate values in the array is %d",func_duplicate(a));
    return 0;
}
int func_duplicate(int b[]){
    int a;
for (int i = 0; i < 4; i++)
{
    if(b[i]==b[i+1]){
    return b[i];
    }
}

}