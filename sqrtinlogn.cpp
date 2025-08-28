#include<bits/stdc++.h>
using namespace std;
 
int sqrts(int n){
    int l=1,h=n;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n) h=mid-1;
        else l=mid+1;
    }
    return h;
}

int main(){
 int n=24;
 cout<<sqrts(n);
    return 0;
}