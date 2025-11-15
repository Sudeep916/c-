//Count total prime numbers in an array.

#include<iostream>
using namespace std;

bool isP(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    
    for (int i=3 ; i*i<=n ; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    bool isPrime = false;
    int c=0;
    
    int arr[n];
    cout<<"Enter elements"<<endl;
    for (int i =1 ; i<=n ; i++){
        cin>>arr[i];
    }
    
    for (int i =0 ; i<=n ; i++){
        if( isP( arr[i] )){
            c++;
        }
    }
    cout<<c;
}