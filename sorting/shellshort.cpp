#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void shellsort(int *arr,int n)
{

  for(int gap=n/2;gap>=1;gap=gap/2)
  {
    for(int j=gap;j<n;j++)
    {
      for(int i=j-gap;i>=0;i=i-gap)
      {
        if(arr[i+gap]>arr[i])
        break;
       else
       swap(arr[i],arr[i+gap]);
      }
    }
  }
}
void display(int*arr,int n)
{
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={23,21,25,30,35,2,9,8,4,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  shellsort(arr,n);
  display(arr,n);
  return 0;
}
