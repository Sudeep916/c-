//Check if the sum of digits of a number is prime
#include<iostream>
using namespace std;

bool isP(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    
    for (int i =3 ; i*i<=n ; i+=2 ){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int d;
    cout<<"Enter a number: "<<endl;
    cin>>d;
    int s=0;
    while(d>0){
        int n=d%10;
        s = s+n;
        d=d/10;
    }
    if(isP(s)){
        cout<<"Digit sum is prime number";
    }
    else{
        cout<<"Digit sum is not prime number";
    }
}
