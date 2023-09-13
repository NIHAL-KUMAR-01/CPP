#include<iostream>
using namespace std;
int main(){
    int choice,piece;
    cout<<"Available Items :-\n1.Masala Dosa @69 \n2.Paneer Dosa @89 \n3.Plain Dosa @49 \n4.Mushroom Dosa @79 \nEnter choice : ";
    cin>>choice;
    cout<<"Enter Quantity: ";
    cin>>piece;
    switch (choice)
    {
    case 1:
        cout<<"\nYour Bill----\nMasala Dosa \nQuantity : "<<piece<<"\nTotal Price ="<<(69*piece);
        break;
    case 2:
        cout<<"\nYour Bill----\nPanner Dosa \nQuantity : "<<piece<<"\nTotal Price ="<<(89*piece);
        break;
    case 3:
        cout<<"\nYour Bill----\nPlain Dosa \nQuantity : "<<piece<<"\nTotal Price ="<<(49*piece);
        break;
    case 4:
        cout<<"\nYour Bill----\nMushroom Dosa \nQuantity : "<<piece<<"\nTotal Price ="<<(79*piece);
        break;
    
    default:
        cout<<"Invalid choice\n Thank You !!";
        break;
    }

    return 0;
}