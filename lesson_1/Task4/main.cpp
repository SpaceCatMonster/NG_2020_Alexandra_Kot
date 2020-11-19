#include <iostream>

using namespace std;

int main()
{
  int a=0;
  cout<<"Skolko ti zarobativaesh:";
  cin>>a;
  if(a<1000){
    cout<<"Rabotai bolshe";
  }
  if(a>1000 && a<1000000){
    cout<<"Tak derzhat!";
  }
  if(a>1000000){
    cout<<"Ti millioner!";
  }
  cout<<" no ti molodec!";
}
