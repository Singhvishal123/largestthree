#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
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
     cout<<"The second highest number in the said array is:"<<endl;
     cout<<num[n-2]<<endl;
     cout<<"The second lowest number in the said array is:"<<endl;
     cout<<num[2];
     return 0;
     
}