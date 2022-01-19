#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(void){
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
     cout<<"The largest three numbers in the said array are:"<<endl;
     cout<<num[n-1]<<"\t"<<num[n-2]<<"\t"<<num[n-3];
     return 0;
     
}
