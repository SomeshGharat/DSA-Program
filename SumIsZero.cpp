#include<bits/stdc++.h>
using namespace std;
 
int f(vector<int>v){
    unordered_map<int,int>mp;
    int count=0;
    
    int sum=0;
    mp[0]=-1;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(mp.count(sum)){
          count=max(count,i-mp[sum]);
        }
         else mp[sum]=i;

        
    }
    return count;
}

int main()
{
vector<int>v={9,-3,3,-1,6,-5};
 
cout<<f(v);
 
 
    return 0;
}