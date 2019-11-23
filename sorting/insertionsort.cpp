#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int*arr,int n)
{
  for(int i=1;i<n;i++) // break the array into sorted and unsorted taking first element as sorted and rest of the array as unsorted
{
  int value=arr[i];
  int hole=i;
  while(hole>0&&arr[hole-1]>value)
  {arr[hole]=arr[hole-1];
    hole--;

  }
  arr[hole]=value;
}
}
void display(int*arr,int n)
{
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={8,9,4,1,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertionsort(arr,n);
  display(arr,n);
}
