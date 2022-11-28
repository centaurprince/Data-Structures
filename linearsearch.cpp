#include<iostream>
using namespace std ;

int linearsearch(int arr[],int n ,int key)
{
    for(int i =0 ; i<n ; i++)
    {
        if(key == arr[i])
        {
            return i ;
        }
    }

    return -1;
}

int main()
{
    int n ;
    cout<<"Enter size of array : ";
    cin>> n;

    cout<<endl;
    int arr[n];
    for (int i =0 ;i<n ; i++ )
    {
        cout<<"Enter element of array : ";
        cin>>arr[i];
    }

    int key ;
    cout<<"\nEnter the number which you want to serach in array : ";
    cin>>key;

    cout<<linearsearch(arr , n , key);

}