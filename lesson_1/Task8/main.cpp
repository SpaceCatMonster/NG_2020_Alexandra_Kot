#include <iostream>

using namespace std;

int main()
{
    int z;
    cout<<"Tree of stars\n"
    <<"Enter number:";
    cin>>z;
    cout<<endl;
    for(int j = 0; j <z; j++){
        for(int i = 0; i <= z-j; i++){
            cout << " ";
        }
        for(int i = z-2*j; i <= z; i++){
            cout << "*";

        }
        cout << endl;
    }

        for(int j=0;j<=z;j++){
            cout<<" ";
        }
        cout<<"*";
}
