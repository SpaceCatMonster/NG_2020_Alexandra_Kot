#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0,r=0;
    cout << "Vvedite pervoe chislo:" << endl;
    cin>>a;
    cout << "Vvedite vtoroe chislo:" << endl;
    cin>>b;
    cout << "Vvedite deistvie:" << endl;
    cin>>c;
    if(c==1){
        r=a+b;
    }
    if(c==2){
        r=a-b;
    }
    if(c==3){
        r=a*b;
    }
    if(c==4){
        r=a/b;
    }
    cout << "Rezultat:" <<r<< endl;
}
