#include<bits/stdc++.h>
using namespace std;
void heapify(int *arr,int n,int i)
{
  int largest=i;
  int leftchild=2*i+1;
  int rightchild=2*i+2;

  if(leftchild<n&&arr[leftchild]>arr[largest])
  largest=leftchild;
  if(rightchild<n&&arr[rightchild]>arr[largest])
  largest=rightchild;
  if(largest!=i)
  {swap(arr[i],arr[largest]);
heapify(arr,n,largest);
}}
void heapsort( int*arr,int n)
{//nonleafnode=n/2 -1
//build max heap
  for(int i=(n/2)-1;i>=0;i--)
  {
    heapify(arr,n,i);
  }
  //delete heap
  for(int i=n-1;i>=0;i--)
  {
    swap(arr[0],arr[i]);
    heapify(arr,i-1,0);
  }
}
void display(int*arr,int n)
{
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={4,8,9,25,3,4,26,28,11,14};
  int n=sizeof(arr)/sizeof(arr[0]);
  heapsort(arr,n);
  display(arr,n);
}
