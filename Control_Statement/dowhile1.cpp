#include<iostream>
using namespace std;
int main(){
    int i=1;
    int num=4;
    do
    {
        cout<<num<<" X "<<i<<"="<<(num*i);
        cout<<"\n";
        i++;
    } while (i<=10);
    
    return 0;
}