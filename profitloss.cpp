#include<iostream>
using namespace std;

int main() {
  int cp;
  cout<<"Enter your cp" ;
  cin>>cp;
  int sp;
  cout<<"Enter your sp" ;
  cin>>sp;
  if(sp>cp){
    cout<<"profit = ";
    cout<<sp-cp;
  }
  else if(sp<cp){
    cout<<"loss = ";
    cout<<cp-sp;
  }
  else
    cout<<"no profit no loss";
  
}
 