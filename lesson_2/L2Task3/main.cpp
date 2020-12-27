#include <iostream>

using namespace std;

int main()
{
    int ch[20], cn=1, k_ch=0, b_ch=0, z=0, p=0, sp=0, st=0;
    while(z<20){
        ch[z]=0;
        z++;
    }
    cout<<"Enter number:(enter zero to stop):"<<endl;
    while(cn>0){
        cin>>cn;
        ch[k_ch]=cn;
        k_ch++;
    }
    for(int i=0;i<20;i++){
        if(ch[i]>b_ch){
            b_ch=ch[i];
        }
    }
    while(p<20){
        while(sp<(b_ch-ch[p])/2){
            cout<<" ";
            sp++;
        }

        while(st<ch[p]){
            cout<<"*";
            st++;
        }
        sp=0;
        st=0;
        p++;
        cout<<endl;
    }
}

