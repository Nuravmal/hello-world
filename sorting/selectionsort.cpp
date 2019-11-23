#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;
void selectionsort(int *arr,int n)
{int temp;
 for(int i=0;i<n-1;i++)//n-2 times loop chlegi coz last element already sahi positon pe aajayega
 {
     int min=i;
     for(int j=i+1;j<n;j++) // it will scan array from i+1 to n  for min element
     {
         if(arr[j]<arr[min])
         min=j;
     }
     temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
 }
}


void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}






int main()
{int arr[]={5,7,8,9,6,4,3,12,};
int n=sizeof(arr)/sizeof(arr[0]);
selectionsort(arr,n);
display(arr,n);
}
   
 
