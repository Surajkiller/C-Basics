#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter your number : ";
    cin>>n;
    if(n%5 == 0){
        cout<<"This is divisible by 5";
    }
    else{
        cout<<"This is not divisible by 5";
    }
}