bool isPowerOfTwo(int n) {
    if(n>0){
        double x=log2(n);
        if(floor(x)==x){
            return true;
        }else{
            return false;
        }
    }else
    return false;
}