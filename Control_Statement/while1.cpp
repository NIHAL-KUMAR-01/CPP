#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number to print its table : ";
    cin>>num;
    int i=1;
    while (i<=10)
    {
        cout<<num<<" X "<<i<<"="<<(num*i);
        cout<<"\n";
        i++;
    }
    
    return 0;
}