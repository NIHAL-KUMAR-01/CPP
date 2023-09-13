#include<iostream>
using namespace std;
int main(){
    //Wap in c++ to get the day's name after getting choice from user i.e (1-7)
    int choice;
    cout<<"Enter (1-7) to get the day in a week : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"It's Monday";
        break;
    case 2:
        cout<<"It's Tuesday";
        break;
    case 3:
        cout<<"It's Wednesday";
        break;
    case 4:
        cout<<"It's Thrusday";
        break;
    case 5:
        cout<<"It's Friday";
        break;
    case 6:
        cout<<"It's Saturday";
        break;
    case 7:
        cout<<"It's Sunday";
        break;
    default:
        cout<<"Invalid Input !!\nEnter Choice(1-7)only";
        break;
    }
    return 0;
}