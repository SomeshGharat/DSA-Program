#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> f(vector<vector<int>>& arr){
    vector<vector<int>>ans;
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(ans.size()==0){
            ans.push_back(arr[i]);
        }
        else{
            if(arr[i][0]<=ans[j][1]){
                ans[j][1]=max(ans[j][1],arr[i][1]);
            }
            else{
                ans.push_back(arr[i]);
                j++;
              
            }
        }
        
    }
    return ans;
}

int main()
{
vector<vector<int>>arr={{1,3},{2,6},{8,10},{15,18}};
 
 vector<vector<int>>ans=f(arr);
 for(auto ele:ans){
     cout<<ele[0]<<" "<<ele[1]<<endl;

 }

    return 0;
}