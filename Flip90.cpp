#include<bits/stdc++.h>
using namespace std;
 
void f(vector<vector<int>>arr,int m,int n){
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v[j][i]=arr[i][j];
        }
    }
    arr=v;
}

void fun(vector<int>arr,int s){
    unordered_set<int>st;
    int i=0,j=0;
    int sum=0;
    int count=0;
   while(i<arr.size() && j<arr.size()){
        sum+=arr[i];
        while(sum>s){
            sum-=arr[j];
            j--;
        }
        if(sum==s){
            count++;
            
        }
        i++;
   }
}
vector<int>v(int n){
    
}

int main()
{

 
 
 
    return 0;
}