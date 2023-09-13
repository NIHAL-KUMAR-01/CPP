#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter First Number: ";
    cin>>n1;
    cout<<"Enter Second Number: ";
    cin>>n2;
    cout<<"Enter Third Number: ";
    cin>>n3;
    
    if (n1>n2 && n1>n3)
    {
        cout<<n1<<" is greatest amongst "<<n1<<","<<n2<<","<< n3;
    }
    else if (n2>n1 && n2>n3)
    {
        cout<<n2<<" is greatest amongst "<<n1<<"," << n2<<","<< n3;
    }
    else if (n3>n1 && n3>n2)
    {
        cout<<n3<<" is greatest amongst "<<n1<<","<<n2<<","<< n3;
    }
     
    return 0;
}