#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,f,temp;
    cout<<"Enter array size ";
    cin>>n;

    int arr[n];
    cout<<"Unsorted Array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(i=1; i<=n-1; i++)
    {
        f=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>f)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=f;
    }

    cout<<"Sorted array ";//ascending order
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


