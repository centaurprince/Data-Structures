// example of an structure 
#include<iostream>
#include<string>
using namespace std;

int main(){
    struct   // declaration of structure 
    {
        string brand ; // declarration of a member 
        string model;
        int year;
    }mycar1, mycar2;
    
    //put data into the first structure 
    mycar1.brand = "Audi";
    mycar1.model = "Z23";
    mycar1.year = 2002;

    // putting data into second structure 
    mycar2.brand ="Mahendra";
    mycar2.model = "MHawak";
    mycar2.year =  2003;

    //printing the structure member 
    cout<<mycar1.brand << " "<< mycar1.model<<" "<<mycar1.year<<endl;
    cout<<mycar2.brand << " "<< mycar2.model<<" "<<mycar2.year<<endl;
    
    return 0;
}