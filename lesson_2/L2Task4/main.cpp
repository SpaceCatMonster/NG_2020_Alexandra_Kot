#include <iostream>

using namespace std;

int main()
{
     int box1[5], ch, box2[5],i, a=0;
    for( i=0;i<5;i++){
        cout<<"Enter how many stars in "<< i+1 <<" column:";
        cin>>ch;
        box1[i]=ch;
        }

    for(i=0;i<5;i++){
        box2[i]=box1[i];
    }
    for(i=0;i<5;i++){
        if(a<box1[i]){
            a=box1[i];
        }
    }
    for(i=0;a>i;i++){
        for(int y=0;y<5;){
            if(box1[y]>0){
                cout<<"*";
                y++;

            }else {
                cout<<" ";
                y++;
            }
        }

        for(int b=0;b<5;b++){
            box1[b]=box1[b]-1;
        }
        cout<<endl;

    }
}
