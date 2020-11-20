#include <iostream>

using namespace std;

int main()
{
  int sal=0;
  cout<<"Skolko ti zarobativaesh:";
  cin>>sal;
  if(sal<1000){
    cout<<"Rabotai bolshe";
  }
  if(sal>999){
    if(sal<1000000){
        cout<<"Tak derzhat!";
    }
    if(sal>999999){
        cout<<"Ti millioner!";
    }
  }
  cout<<" no ti molodec!";
}
