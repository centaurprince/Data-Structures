#include<iostream>
using namespace std;

// sum of all sub-arrays
int main(){
    int curr =0;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n ; i++){
        curr = 0;
        for(int j=i; j<n; j++){
            curr= curr + arr[j];
            cout << curr << endl;
        }
    }
    return(0);
}