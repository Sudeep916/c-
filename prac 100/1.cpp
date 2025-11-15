//Write a program to check whether a number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int c = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        cout<<"It is prime number";
    }
    else{
        cout<<"It is not prime number";
    }
}