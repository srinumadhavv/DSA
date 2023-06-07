#include<iostream>
using namespace std;
long long maxSumSubArray(int arr[],int n){
    long long max_sum = INT_MIN;
    long long cs =0;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs>=max_sum) max_sum=cs;
        if (cs<0) cs=0; 
    }
    return max_sum;
}