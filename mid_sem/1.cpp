#include<iostream>
using namespace std;
class myclass{
    public:
        int data=50;
};
int main(){
    int myclass::*ptr=&myclass::data;
    myclass my;
    cout<<my.*ptr;
    cout<<sizeof(my);
    return 0;
}