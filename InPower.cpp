#include<bits/stdc++.h>
using namespace std;
 
int Inpower(int n,int m){
    if(n<=1 || m<=0) return -1;
    double val=log(m)/log(n);
    if(floor(val)==val) return (int)val;
    else return -1;
    
}

int main()
{
 cout<<Inpower(2,21);
    return 0;
}