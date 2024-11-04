#include<iostream>
using namespace std;
int main()
{
   int n,i,f,c=0;
   cout<<"Enter array size ";
   cin>>n;
   int arr[n];
   cout<<"Array : ";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter a number you want to search ";
   cin>>f;
   for(i=0;i<n;i++)
   {
       if(arr[i]==f)
       {
           c++;
           cout<<f<<" Found at index "<<i<<endl;
       }
   }
   if(c==0)
    cout<<f<<" is not found"<<endl;
   else
   cout<<f<<" is found in array for "<<c<<" times"<<endl;
   return 0;
}


