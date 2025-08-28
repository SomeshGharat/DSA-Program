#include<bits/stdc++.h>
using namespace std;
 
int Minele(vector<int>arr){
    int l=0,h=arr.size()-1,minele=INT_MAX;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]>arr[l]){
        
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
}

int main()
{

 
 
 
    return 0;
}