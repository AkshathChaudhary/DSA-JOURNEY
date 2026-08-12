bool containsDuplicate(int* nums, int n) {
    int size=n*2+1;
    int* hash=(int*)malloc(size*sizeof(int));
    bool*used=(bool*)calloc(size,sizeof(bool));
    for(int i=0;i<n;i++){
        int index = ((unsigned int)nums[i]%size);
        while(used[index]){
            if(hash[index]==nums[i]){
                free(hash);
                free(used);
                return true;
            }
            index=(index+1)%size;
        }
        hash[index]=nums[i];
        used[index]=true;
    }
    free(hash);
    free(used);
    return false;
}