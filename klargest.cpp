#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k;
    cout<<"How many numbers you want to enter:";
    cin>>n;
    int num[n];
    cout<<"Enter the "<<n<<" numbers:"<<endl;
    for(i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"The array is:"<<endl;
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<num[i];
        if(i<n-1){
            cout<<',';
        }
    }
    cout<<"]"<<endl;
    sort(num,num+n);
    cout<<"Which largest number you want to find?"<<endl;
    cin>>k;
    cout<<"The "<<k<<"th largest number in tha array is:"<<endl;
    cout<<num[n-k];
    return 0;
}