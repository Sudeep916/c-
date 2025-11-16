#include<bits/stdc++.h>
using namespace std;

bool isP(int n){
    int o=n;
    int r=0;
    while(0<n){
        int p=n%10;
        r = r*10+p;
        n = n/10;
    }
        return o == r;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=1; i<=n ; i++){
        if(isP(i)){
            cout<<i<<endl;
        }
    }
}
