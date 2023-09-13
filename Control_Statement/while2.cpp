#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number upto which you want the sum : ";
    cin>>num;
    if(num>0)
    {
    int i=1;
    int sum=0;
    while (i<=num)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum of number from 1 to "<<num<<" is : "<<sum;
    }
    else{
        cout<<"Enter a positive number";
    }
}