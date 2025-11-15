#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price: ";
    cin>>sp;
    int pro;
    int loss;
    if(sp>cp){
        cout<<"profit"<<endl;
        pro=sp-cp;
        cout<<pro;
    }
    else if(cp>sp){
        cout<<"Loss"<<endl;
        int loss=cp-sp;
        cout<<loss;
    }
    else{
        cout<<"No profit no loss";
    }
}