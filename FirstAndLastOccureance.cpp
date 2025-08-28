#include<bits/stdc++.h>
using namespace std;
 
pair<int,int> f(vector<int> arr, int n, int k) {
    int l = 0, h = n - 1;
    int lasto = -1, firsto = -1;

    // Last occurrence
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] == k) {
            lasto = mid;
            l = mid + 1; // search right
        } else if (arr[mid] < k) {
            l = mid + 1;
        } else {
            h = mid - 1; // FIXED
        }
    }

    l = 0;
    h = n - 1;

    // First occurrence
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] == k) {
            firsto = mid;
            h = mid - 1; // search left (FIXED)
        } else if (arr[mid] < k) {
            l = mid + 1;
        } else {
            h = mid - 1; // FIXED
        }
    }

    return {firsto, lasto};
}


int main()
{
vector<int>arr={3,4,13,13,13,20,40};
int k=13;
pair<int,int>p=f(arr,arr.size(),k);
 
 cout<<p.first<<" "<<p.second;
 
    return 0;
}