#include <iostream>

using namespace std;

int main()
{
    cout<<"Cards\n";
    int c[10]={0},nc,s,a=0,b=0;
    for(int j=0;j<1;){
        cout<<"Which card?\n";
        cin>>nc;
        cout<<"How many to store?\n";
        cin>>s;
        if(b<1){
            c[nc]=s;
            b++;
        }else{
            c[nc]+=s;
        }
        for(int i=0;i<10;i++){
            cout<<c[i]<<" ";
        }
        a=c[0]+c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9];
        cout<<"\nSum all cards:\n"<<a;
        cout<<endl;
    }
}
