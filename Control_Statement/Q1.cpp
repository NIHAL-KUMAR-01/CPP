#include<iostream>
using namespace std;
int main(){
    //WAP to check if a person is eligible to vote or not
    int age;
    cout<<"Enter the age of User: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"You can Vote";
    }
    else{
        cout<<"Your age is "<<age<<" years Wait for"<<(18-age)<<" years to Vote";
    }
    //WAP to check if a number is even or odd

    int number;
    cout<<"\n\nEnter a positive number to check it's even or odd : ";
    cin>>number;
    if (number%2==0)
    {
        cout<<number<<"  is a even number";
    }
    else{
        cout<<number<<" is a odd number";
    } 
}