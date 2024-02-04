#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Sorting the array by using bubble sort //

    int size;
    cout<<"Enter the size of array : ";
    cin>>size;   
    int arr[2000];
    cout<<"Enter the element in array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=size-2;i>=0;i--)
    {
        bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
