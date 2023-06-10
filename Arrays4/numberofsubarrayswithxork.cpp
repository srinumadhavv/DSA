#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int k)
{
    //    Write your code here.
    int count =0;
    int n = arr.size();
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        int x = xr^k;
        count+=mpp[x];
        mpp[xr]++;
    }
    return count;

}