#include<iostream>
using namespace std;
long long maxSumSubArray(int arr[],int n){
    long long max_sum = INT_MIN;
    long long cs =0;
    int start=0;
    int ans_start=-1,ans_end=-1;
    for(int i=0;i<n;i++){
        if(cs==0) start = i;
        cs+=arr[i];
        if(cs>=max_sum){
            max_sum=cs;
            ans_start = start;
            ans_end=i;
        } 
        if (cs<0) cs=0; 
    }
    return max_sum;
}