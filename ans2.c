// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest_value(int []);
int n;
int main(){
    int a[n],i;
    printf("Enter the Size of an array:");
    scanf("%d",&n);
    printf("Enter the Value of an array:");
    for (i = 0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The Smallest Number from the Given Array is:%d",smallest_value(a));
    return 0;
} 
int smallest_value(int b[]){
  int temp,i;

  for (  i = (n-1);i>0; i--)
  {
    if(b[i]<b[i-1]){
    temp=b[i-1];
    b[i-1]=b[i];
    b[i]=temp;
    }
  }
  return b[0];
  
}