#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> f(vector<int> arr, int k) {
   vector<vector<int>>ans;
   unordered_map<int,vector<int>>mp;
   int sum=0;
   mp[0].push_back(-1);
   for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    int need=sum-k;
    if(mp.find(need)!=mp.end()){
        for(auto ele:mp[need]) ans.push_back(vector<int>(arr.begin()+ele+1,arr.begin()+i+1));
    }
    mp[sum].push_back(i);
   }
}



int main()
{
vector<int>arr={3,4,-7,1,3,3,1,-4};
int k=7;
vector<vector<int>>v=f(arr,k);
 
for(int i=0;i<v.size();i++){
    cout<<"[";
    for(auto ele:v[i]){
        cout<<ele<<",";
    }
    cout<<"]"<<endl;
}
 
 
    return 0;
}