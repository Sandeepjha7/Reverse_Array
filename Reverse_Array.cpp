#include<iostream>
using namespace std;

int Reverse(int arr[],int n)
{
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}

int PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[6]={2,4,6,-9,10,38};
    int brr[5]={4,6,2,1,-5};

    Reverse(arr,6);
    Reverse(brr,5);

    PrintArray(arr,6);
    PrintArray(brr,5);

    return 0;
}