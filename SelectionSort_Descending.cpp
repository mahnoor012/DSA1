#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m_index;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    cout<<"Unsorted Array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<=n; i++)
    {
        m_index=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]>arr[m_index])
            {
                m_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[m_index];
        arr[m_index]=temp;
    }

    cout<<"Sorted array ";//descending order
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

