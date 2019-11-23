#include<bits/stdc++.h>
using namespace std;
//haore implementation
int  partition(int*arr,int lb,int ub)
{int pivot=arr[lb];
  int start=lb;
  int end=ub;
  while(start<end)
  {
    while(arr[start]<=pivot)
    start++;
    while(arr[end]>pivot)
    end--;
    if(start<end)
    swap(arr[start],arr[end]);
  }
  swap(arr[end],arr[lb]);
  return end;

}


int randompartition(int*arr,int start,int end)
{srand(time(NULL));
  int random=start+rand()%(end-start);
  swap(arr[random],arr[end]);
return  partition(arr,start,end);
}
//lomuto implementation


void quicksort(int *arr,int start,int end)
{
  if(start<end)
  {
    int pIndex=randompartition(arr,start,end);
    quicksort(arr,start,pIndex-1);
    quicksort(arr,pIndex+1,end);

  }
}
void display(int*arr,int n)
{
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}int main()
{
  int arr[]={1,8,3,4,9,11,2,7,6,18,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  display(arr,n);
}
