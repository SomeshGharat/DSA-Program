#include<bits/stdc++.h>
using namespace std;

void f(vector<int>arr1,vector<int>arr2){
    int i=arr1.size(),j=0;
    while(i>=0 && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else break;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<arr2.size();j++){
        cout<<arr2[j]<<" ";
    }
}
 
int main()
{
    vector<int>arr1={1,4,8,10};
    vector<int>arr2={2,3,9};
   f(arr1,arr2);
    return 0;
}