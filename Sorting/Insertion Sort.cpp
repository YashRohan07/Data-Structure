#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    cout<<"Enter Elements for the array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Syntex For Insertion Sort
    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j = i-1;

        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

     cout<<"Sorted Array : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }


    getch();
}


