//Print prime factors of a number.

#include<iostream>
using namespace std;

bool isP(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    
    for (int i = 3 ; i*i<=n ; i+=2){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i = 1 ; i <= n ; i++ ){
        if(n%i==0){
            if(isP(i)){
                cout<<i<<" ";
            }
        }
    }
}
