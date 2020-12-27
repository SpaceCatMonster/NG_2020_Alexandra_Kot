#include <iostream>

using namespace std;

int main()
{
    int s[10],i,z,k=0;
    cout<<"Schools"<<endl;
    for(i=0;i<10;i++){
        cout<<"Enter number:";
        cin>>s[i];
    }
    cout<<"Enter number your school:";
    cin>>z;
    for(i=0;i<10;i++){
        if(z==s[i]){
            k++;
        }
    }
    if(k<1){
        cout<<"Sorry, I don't know your school";
    }else{
        cout<<"I know this school!";
    }
}
