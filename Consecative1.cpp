#include<bits/stdc++.h>
using namespace std;
 
int f(vector<int>arr  ){
    int j=0;
    int count=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=1 || i==arr.size()-1){
            count=max(count,i-j);
            j=i;
        }
    }
    return count;
}

int main()
{
vector<int>arr={1,1,0,1,1,1};
cout<<f(arr);
 
 
 
    return 0;
}