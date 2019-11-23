#include<bits/stdc++.h>
using namespace std;
void merge(int*arr,int leftIndex,int mid,int rightIndex)
{
  int i,j,k;
  int nl=mid-leftIndex+1;//size of array1;
  int nr=rightIndex-leftIndex+1;//size of array2;
  int left[nl];
  int right[nr];
  i=j=k=0;
  while(i<nl&&j<nr)
  {
    if(left[i]<right[j])
    arr[k++]=left[i++];
    else
    arr[k++]=right[j++];
  }
  while(i<nl)
    arr[k++]=left[i++];
    while(j<nr)
      arr[k++]=right[j++];

}
void mergesort(int*arr,int leftIndex,int rightIndex)
{
  if(leftIndex<rightIndex)
  {
    int mid=(leftIndex+rightIndex)/2;
    mergesort(arr,leftIndex,mid);
    mergesort(arr,mid+1,rightIndex);
    merge(arr,leftIndex,mid,rightIndex);
  }


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
  mergesort(arr,0,n-1);
  display(arr,n);
}
