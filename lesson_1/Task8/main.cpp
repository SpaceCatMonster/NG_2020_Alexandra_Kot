#include <iostream>

using namespace std;

int main()
{
    int z;
    cout<<"Tree of stars\n"
    <<"Enter number:";
    cin>>z;
    int x = z;
    int y = 1;
    cout<<endl;
    for(int j = 1; j <= z; j++){
        for(int i = 1; i <= x; i++){
            cout << " ";
        }
        x--;
        for(int i = 1; i <= y; i++){
            cout << "*";
        }
        y += 2;
        cout << endl;
    }
    for(int i=0;i<z;i++){
        cout<<" ";
        if(i==z-1){
            cout<<"*";
        }
    }

}
