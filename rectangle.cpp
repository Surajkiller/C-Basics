#include<iostream>
using namespace std;
 int main() {
  int l, b;
  cout<<"Enter length : ";
  cin>>l;
  cout<<"Enter breadth : ";
  cin>>b;
 int Area = l*b, perimeter = 2*(l+b);
 cout<<"Area = "<<Area<<endl;
 cout<<"Perimeter = "<<perimeter<<endl;
 if(Area>perimeter){
    cout<<"Area is greater then permeter";
 }
  else if(Area<perimeter){
    cout<<"Area is lesser then permeter";
 }
 else cout<<"Both are equal";
}