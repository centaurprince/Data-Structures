#include<iostream>
using namespace std;

int binarysearch(int arr[], int n , int key)
{
    int s =0 ;
    int e =n;

    while(s<=e){
        int mid =(s+e)/2;

        if (key == arr[mid]){
            return mid ;
        }
        else if (key< arr[mid]){
            e = mid -1;
        }
        else {
            s =mid+1;
        }
    }
    return -1;
}

int main ()
{
    int n ;
    cout<<"Enter size of array : ";
    cin>> n;

    int arr[n];
    cout<<endl;
    for(int i =0 ; i<n;i++)
    {
         cout<<"Enter elements of array : ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number which you want to search : ";
    cin>>key;

    cout<< binarysearch(arr , n , key);

}