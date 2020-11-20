#include <iostream>

using namespace std;

int main()
{
    int z=0;
    cin>>z;
    int rt=z;
    for(int i=0;i<z;i++){//square
        for(int j=0; j<z;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<z;i++){//triangle 1
        for(int j=0; j<i || j==i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<z;i++){//triangle 2
        for(int l=z-2; l>i || l==i;l--){
            cout<<" ";
        }
        for(int j=0; j<i || j==i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<z;z--){//triangle 3
        for(int j=1;j<z||j==z;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    z=rt;

    cout<<endl;

    for(int i=0;i<z;i++){//triangle 4
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int l=0;l<z-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

}
