#include<iostream>
using namespace std;
void swap(int &x,int &y)  //swap two numbers
{
    int temp=x;
    x=y;
    y=temp;
}
void reverse(int *arr,int si,int ei)  //reverses array from si(start Index) to ei(end Index)
{
    while(si<ei)
    {
        swap(arr[si],arr[ei]);
        si++;
        ei--;
    }
}
void rotateArray(int *arr,int size,int k)   
{
    int si=0;
    int ei=size;
    reverse(arr,si,ei);   //reverse complete array
    reverse(arr,0,size-k);   //reverse array from index zero to size-k
    reverse(arr,size-k+1,size);   //reverse array from size-K+1 to size
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;  //index number from where array to be rotate
    cin>>k;
    rotateArray(arr,n-1,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}
