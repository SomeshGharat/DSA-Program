#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>arr={1,3,2,5,6,8};
int a=INT_MIN,b=INT_MIN;
for(int i=0;i<arr.size();i++){
    if( arr[i]>=a){
       b=a;
        a=arr[i];
    } 
    else if(arr[i]>=b && arr[i]!=a){
        b=arr[i];
    }
}
 cout<<a<<" "<<b; 
 
 
    return 0;
}