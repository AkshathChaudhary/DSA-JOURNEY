bool isAnagram(char* s, char* t) {
    int count[26]={0};
    //counting number of elements in s
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    //deleting elements from count
    for(int i=0;t[i]!='\0';i++){
        count[t[i]-'a']--;
    }
    //if count is 0 then both strings had same elements hence anagram..
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}