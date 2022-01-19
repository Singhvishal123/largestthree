#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void secondlargest();
void secondlargest(){
    int n,i;
    cout<<"How many numbers you want to enter:"<<endl;
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
            cout<<",";
        }
    }
    cout<<"]"<<endl;
    sort(num,num+n);
    cout<<"The second largest element in the said array is:"<<endl;
    cout<<num[n-2];

}
int main(){
    secondlargest();
    return 0;
}