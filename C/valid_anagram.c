bool isAnagram(char * s, char * t){
    if(strlen(s) != strlen(t)) return false; 
    
    int check_s[26] = {0};
    int indexs;
    int indext;
    
    for(int i = 0; (s[i] != '\0') || (t[i] != '\0'); i++){
        indexs = s[i] - 'a';
        check_s[indexs] ++;
        indext = t[i] - 'a';
        check_s[indext] --;
    }
 
    for(int i = 25; i >= 0; i--){
        if(check_s[i] != 0) return false;
    }
    
    return true;
}
