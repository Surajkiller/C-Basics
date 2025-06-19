#include<iostream>
using namespace std;
int main(){
  int n1;
  cin>>n1;
  char ch;
  cin >>ch;
  int n2;
  cin>>n2;
  switch (ch){
    case '+':
      cout<<n1+n2<<endl;
      break;
    case '-':
      cout<<n1-n2<<endl;
      break;
    case '*':
      cout<<n1*n2<<endl;
      break;
    case '/':
      cout<<n1/n2<<endl;
      break;
    default :
      cout<<"invalid"<<endl;
    
  }
}
 