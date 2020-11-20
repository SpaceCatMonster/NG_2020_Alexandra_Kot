#include <iostream>

using namespace std;

int main()
{
    int first=0, second=0, operation=0,rezult=0;
    cout << "Vvedite pervoe chislo: ";
    cin>>first;
    cout << "Vvedite vtoroe chislo: ";
    cin>>second;
    cout << "Vvedite deistvie: ";
    cin>>operation;
    switch(operation){
        case 1:{
            rezult=first+second;
            break;
        }
        case 2:{
            rezult=first-second;
            break;
        }
        case 3:{
            rezult=first*second;
            break;
        }
        case 4:{
            rezult=first/second;
            break;
        }
        default:{
            cout<<"Error, result will be 0"<<endl;
            break;
        }

    }
    cout << "Rezultat: " <<rezult<< endl;
}
