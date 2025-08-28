#include<bits/stdc++.h>
using namespace std;
 //2,6,5,8,11=14
pair<int,int> f(vector<int>arr,int n){
    unordered_map<int,int>mp;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        mp[n-arr[i]]=i;

        if(mp.count(arr[i])){
            return {i,mp[sum-n]};
        }
    }
    return {-1,-1};
}

vector<int> UseStack(int arr[],stack<int>&st,int n){
    
    
    vector<int>lead;
    for(int i=n-1;i>=0;i--){
        if(st.empty() || arr[i]>st.top()){
            lead.push_back(arr[i]);
            st.push(arr[i]);
        }
    }
    reverse(lead.begin(),lead.end());
    return lead;
    
}

void LeaderNums(int arr[],int n){
    stack<int>st;
    
    vector<int>v=UseStack(arr,st,n);
    for(auto ele:v){
        cout<<ele<<" ";
    }
}

int f(vector<int>& v){
   sort(v.begin(),v.end());
    int max_count=0;
    int j=0;
    int count=0;
    for(int i=1;i<v.size();i++){
        int diff=v[i]-v[i-1];
        if(diff<=1){
            max_count=max(max_count,i-j+1);
        }
        else j=i;
    }
return max_count;
}
int optif(vector<int>& v){
    unordered_set<int>st(v.begin(),v.end());
    int max_len=0;

    for(auto ele:st){
        if(!st.count(ele-1)){
            int curr=ele;
            int len=1;
            while(st.count(curr+1)){
                curr++;
                len++;
            }
            max_len=max(max_len,len);
        }

    }

}

int main()
{
int arr[]={10,22,12,3,0,6};
vector<int>v={100,200,1,3,2,4};
//LeaderNums(arr);
cout<<f(v);
 
 
    
}