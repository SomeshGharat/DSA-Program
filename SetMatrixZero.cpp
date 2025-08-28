#include<bits/stdc++.h>
using namespace std;
 
void setmatrixzero(vector<vector<int>>& v){
    int m=v.size();
    int n=v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;i<n;j++){
            if(v[i][j]==0){
                if(i+1<m && i>=0 && j+1<n && j-1>=0){
                    v[i+1][j]=0;
                   
                }
            }
        }
    }
}


int main()
{
vector<vector<int>>v={{1,1,1},{1,0,1},{1,1,1}};

setmatrixzero(v);
 
 
 
    return 0;
}