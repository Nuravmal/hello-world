#include<bits/stdc++.h>
using namespace std;
void stableselectionsort(int *a,int n)
{
  for(int i=0;i<n-1;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[min]>a[j])
      min=j;}

      int key=a[min];
      while(min>i)
      {
        a[min]=a[min-1];
        min--;
      }
      a[i]=key;
    }
  }
  void display(int*arr,int n)
  {
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  }
int main()
{
  int arr[]={ 4, 5, 3, 2, 4, 1};
  int n=sizeof(arr)/sizeof(arr[0]);
  stableselectionsort(arr,n);
  display(arr,n);
}
