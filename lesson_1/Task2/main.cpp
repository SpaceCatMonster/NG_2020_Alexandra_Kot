#include <iostream>

using namespace std;

int main()
{
    int first=0, second=0, operation=0;
    cout << "Vvedite pervoe chislo: ";
    cin>>first;
    cout << "Vvedite vtoroe chislo: ";
    cin>>second;
    cout << "Vvedite deistvie: ";
    cin>>operation;
    cout << "Rezultat: " ;
    switch(operation){
        case 1:{
            cout<<first+second;
            break;
        }
        case 2:{
            cout <<first-second;
            break;
        }
        case 3:{
            cout << first*second;
            break;
        }
        case 4:{
            cout <<first/second;
            break;
        }
        default:{
            cout<<"Error, result will be 0"<<endl;
            break;
        }

    }
}
