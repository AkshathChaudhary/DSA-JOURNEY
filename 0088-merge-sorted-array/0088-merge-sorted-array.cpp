class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int ind=m+n-1,i=m-1,j=n-1;
        while(i>=0 && j>=0){
            if(A[i]<=B[j]){
                A[ind]=B[j];
                ind--;
                j--;
            }else{
                A[ind]=A[i];
                ind--;
                i--;
            }
        }
        while(j>=0){
            A[ind]=B[j];
            ind--;
            j--;
        }
    }
};