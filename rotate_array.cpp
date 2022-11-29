#include<iostream>
using namespace std;

void inputarray(int arr[] ,int n){
    for(int i =0; i<n; i++){
        cout<<"Enter elment of array : ";
        cin>>arr[i];
    }
}

void rotate(int arr[], int n, int key){
    int temp[n];

    int k=0;

    for(int i =key; i<n; i++){
        temp[k]=arr[i];
        k++;
    }

    for(int i=0; i<key ; i++){
        temp[k]=arr[i];
        k++;
    }

    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
    
}

void printarray(int arr[], int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<endl;

    int arr[n];
    inputarray(arr , n);

    int key;
    cout<<"\nEnter index where array will rotate : ";
    cin>>key;

    int m;
    m = sizeof(arr)/sizeof(arr[0]);
    rotate(arr , m , key);

    cout<<"\nArray after rotation is : ";
    printarray(arr, n );

    return(0);
}