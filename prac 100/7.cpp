//Check if a number is super prime (its position in the prime sequence is also prime).

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    
    for(int i =3 ; i*i<=n ; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    
    int c=0;
    for (int i =1 ; i<=n ; i++){
        if(isPrime(i)){
            c++;
        }
    }
    if(isPrime(n)){
    if(isPrime(c)){
        cout<<"Number is SuperPrime";
        }
        else{
            cout<<"Number is not super prime";
        }
    }
    else{
        cout<<"Not even a Prime Number";
    }
   
}