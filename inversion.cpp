#include<bits/stdc++.h>
using namespace std;

int count=0;

void merge(vector<int>arr1,vector<int>arr2){
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            
        }
    }
}


void mergersrt(vector<int>arr){
    if(arr.size()==1) return;
    int mid=(arr.size())/2;

    vector<int>arr1(mid);
    vector<int>arr2(arr.size()-(mid+1));
    for(int i=0;i<mid;i++) arr1[i]=arr[i];
    for(int i=mid+1;i<arr.size();i++) arr[i-(mid+1)]=arr[i];
    mergersrt(arr1);
    mergersrt(arr2);
    merge(arr1,arr2);
}

int f(vector<int>arr){
    mergersrt(arr);
}

int prd(vector<int>v){
    int t_mat=1;
    int ans=0;
    for(int i=0;i<v.size();i++){
        if(t_mat==0) t_mat=1;
        t_mat=max(t_mat*v[i],v[i]);
        ans=max(t_mat,ans);
    }
    return ans;
}

int main()
{
vector<int>arr={1,2,-3,0,-4,-5};
int x=f(arr);
 
 
 
    return 0;
}