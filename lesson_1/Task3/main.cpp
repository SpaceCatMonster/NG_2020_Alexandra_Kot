#include <iostream>

using namespace std;

int main()
{
    int nuzhno=0, vodnoy=0, bylo=0;
    cout << "Skolko oreshkov nuzhno belochke:";
    cin>>nuzhno;
    cout << "Skolko oreshkov v odnoy shishke:";
    cin>>vodnoy;
    cout << "Skolko shishek bylo sobrano:";
    cin>>bylo;
    if(vodnoy*bylo>=nuzhno){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
