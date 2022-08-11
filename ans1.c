// Write a function to find the greatest number from the given array of any size.
#include<stdio.h>
int greater_value(int []);
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
    printf("The Greatest Number from the Given Array is:%d",greater_value(a));
    return 0;
} 
int greater_value(int b[]){
  int temp,i;

  for (  i = 0;i<(n-1); i++)
  {
    if(b[i]>b[i+1]){
    temp=b[i];
    b[i]=b[i+1];
    b[i+1]=temp;
    }
  }
  return b[n-1];
  
}