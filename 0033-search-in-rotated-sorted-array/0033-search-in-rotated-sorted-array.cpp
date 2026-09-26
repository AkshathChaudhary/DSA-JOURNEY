class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st=0,end=A.size()-1;
    
        while(st<=end){
            int mid= st + (end-st)/2;
            if(tar==A[mid]){
                return mid;
            }
            if(A[st]<=A[mid]){//left side is sorted then we apply binary search there
                if(tar<=A[mid] && tar>=A[st]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else{//right side is sorted then we apply binary search there
                if(tar>=A[mid] && tar<=A[end]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};