#include<bits/stdc++.h>
using namespace std;
void merge(int*arr,int*left,int*right,int nl,int nr)
{
  int i,j,k;//i->left j->right k->arr;
  i=j=k=0;
  while(i<nl&&j<nr)
  {if(left[i]<right[j])
    arr[k++]=left[i++];
    else
    arr[k++]=right[j++];

  }
  while(i<nl)
  arr[k++]=left[i++];
  while(j<nr)
  arr[k++]=right[j++];

}
void mergesort(int*arr,int n)
{
  if(n<2)//if array has only one element
  return;
  int mid=n/2;
  int *left=new int[mid];
  int*right=new int[n-mid];
  for(int i=0;i<mid;i++)
  left[i]=arr[i];
  for(int j=mid;j<n;j++)
  right[j-mid]=arr[j];
  mergesort(left,mid);
  mergesort(right,n-mid);
  merge(arr,left,right,mid,n-mid);
  delete(left);
  delete(right);
}

void display(int *arr,int n)
{
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
}




int main()
{
  int arr[]={1,8,3,4,9,11,2,7,6,18,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  mergesort(arr,n);
  display(arr,n);
}
