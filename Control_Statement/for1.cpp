#include<iostream>
using namespace std;
int main(){
    int laststars;
    cout<<"Enter the no of stars in last row : ";
    cin>>laststars;
    for (int i = 0; i < laststars; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}