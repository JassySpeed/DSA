#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Insertion sort //

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[2000];

    cout<<"Enter the element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    return 0;
}