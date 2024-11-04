#include<iostream>
using namespace std;
//sorted and non uniform
int main()
{
    int i,j,c=0,h,l,p,k,n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    cout<<"Array : "; //Give array in Ascending order
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number you want to search ";
    cin>>k;
    l=0;
    h=n-1;
    while(l<=h)
    {
        p=l+((h-l)/(arr[h]-arr[l]))*(k-arr[l]);
        if(arr[p]==k)
        {
            c++;
            cout<<"Found "<<endl;
            break;
        }
        else if(arr[p]>k)
        {
            h=p-1;
        }
        else if(arr[p]<k)
        {
            l=p+1;
        }
    }
    if(c==0)
        cout<<"Not Found\n";
    else
    {
        cout<<k<<" Found at "<<p<< " index "; //For the first found index
    }
}


