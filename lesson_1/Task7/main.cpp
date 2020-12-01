#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<"0";
    for(int i=1;i<=number;i++){
        cout<<","<<i;
    }
}
