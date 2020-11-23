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
    switch(operation){
        case 1:{
            cout << "Rezultat: " <<first+second<< endl;
            break;
        }
        case 2:{
            cout << "Rezultat: " <<first-second<< endl;
            break;
        }
        case 3:{
            cout << "Rezultat: " <<first*second<< endl;
            break;
        }
        case 4:{
            cout << "Rezultat: " <<first/second<< endl;
            break;
        }
        default:{
            cout<<"Error, result will be 0"<<endl;
            break;
        }

    }
}
