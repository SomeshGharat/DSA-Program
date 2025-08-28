#include<bits/stdc++.h>
using namespace std;
 
int f(vector<int>arr,int n){
    unordered_map<int,int>mp;
    int sum=0;
  
    mp[0]=-1;
    int maxlen=0;

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(mp.count(sum-n)){
            maxlen=max(maxlen,i-mp[sum-arr[i]]);
           
        }
        if(mp.find(sum)==mp.end())mp[sum]=i;

    }
}
int fun0(vector<int>arr,int n){

    int sum=0,j=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==n){
            maxlen=max(maxlen,i-j+1);
        }
        while(sum>n) {
            sum-=arr[j];
            j--;
        }
    }
}

int main()
{
vector<int>arr={2,3,5,1,9};
int n=5;
cout<<f(arr,n);
 
 
 
    return 0;
}