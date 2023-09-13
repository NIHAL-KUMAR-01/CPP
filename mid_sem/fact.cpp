#include<iostream>
using namespace std;
class factorial{
    int num,result;
    public:
        void getdata();
        int process(int);
        void output();
};
void factorial :: getdata(){
    cout<<"Enter Num ";
    cin>>num;
    result=process(num);
}

int factorial :: process(int num){
    if (num==0)
    {
        return 1;
    }else{
        return num* process(num-1);
    }
}
void factorial :: output(){
    cout<<"The Factorial of "<< num <<" is "<<result;}
int main(){
    factorial f;
    f.getdata();
    f.output();
}