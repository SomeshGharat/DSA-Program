#include<bits/stdc++.h>
using namespace std;
 
pair<int,int>f(vector<int>v,int n){
    int x=n*(n+1)/2;
    int y=0;
    for(auto ele:v){
        y+=ele;
    }
    int eq1=x-y;
    int x2=n*(n+1)*(2*n+1)/6;
    int y2=0;
    for(auto ele:v){
        y2+=(ele*ele);
    }
    int eq2=x2-y2;
    int eq3;
    return {-1,-1};
}

int main()
{
    vector<int>v={3,1,2,5,4,6,7,5};
    pair<int,int>p=f(v,v.size()); 
    return 0;
}