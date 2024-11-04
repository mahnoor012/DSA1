#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,f;
    cout<<"Enter array size ";
    cin>>n;

    int arr[n];
    cout<<"Unsorted Array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

  for(i=0;i<n-1;i++)
  {
      for(j=0;j<n-1;j++)
      {
          if(arr[j+1]<arr[j])
          {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }
  cout<<"Sorted array : "; //ascending order
   for(i=0;i<n;i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;


}


