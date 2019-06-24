#include<iostream>
#include <bits/stdc++.h >
using namespace std;

int partition(int *A,int start,int end) 
{
  int pivot=A[end];           
  int pIndex=start;
  for(int i=start;i<end;i++)
  {
    if(A[i]<=pivot)
    {swap(A[i],A[pIndex]);
    pIndex++;
  }
}
swap(A[pIndex],A[end]);
return pIndex;}

void quicksort(int*A,int start,int end)
{
  if(start<end)
  {
    int Pindex=partition(A,start,end);
    quicksort(A,start,Pindex-1);
    quicksort(A,Pindex+1,end);
  }
}
 int main()
 {
   int arr[]={5,9,7,1,2,3,6};
   quicksort(arr,0,7);
   for(auto i:arr)
   cout<<i<<" ";
 }
