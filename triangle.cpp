#include<iostream>
using namespace std;
int main(){
     int A,B,C;
     cout<< "enter length of side A : ";
     cin>>A;
     cout<< "enter length of side B : ";
     cin>>B;
     cout<< "enter length of side C : ";
     cin>>C;
     int x = A+B, y = A+C, z = B+C ;
     if(x>C && y>B && z>A){
        cout<<"This triangle is valid";
     }
     else{
        cout<<"This triangle is not valid";
     }
}
 