class Solution {
public:

    bool searchInRow(vector<vector<int>>& mat, int target, int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mat[row][mid]==target){
                return true;
            }else if(target>mat[row][mid]){
                st=mid+1;
            }else if(target<mat[row][mid]){
                end=mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat[0].size(),m=mat.size();
        int sr=0,er=m-1;
        while(sr<=er){
            int midr = sr + (er-sr)/2;
            if(mat[midr][0]<= target && target <=mat[midr][n-1]){
                return searchInRow(mat,target,midr);
            }else if(target>mat[midr][n-1]){
                sr=midr+1;
            }else if(target<mat[midr][0]){
                er=midr-1;
            }
        }
        return false;
    }
};