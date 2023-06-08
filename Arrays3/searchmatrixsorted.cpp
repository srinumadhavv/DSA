#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo=0,hi=matrix[0].size()*matrix.size()-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target){
                return true;
            }else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return false;
    }
};