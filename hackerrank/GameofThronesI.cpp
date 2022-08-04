string gameOfThrones(string s) {
    vector<int> f(26,0);
    int i,odd=0,temp;
    for(i=0;s[i];i++){
        temp = s[i] - 97;
        f[temp]++;
    }

    if(s.size() & 1){
        for(i=0;i<26;i++){
            if(f[i] & 1){
                odd+=1;
                if(odd>1){
                    return "NO";
                }
            }
        }
        return "YES";
    }
    else{
        for(i=0;i<26;i++){
            if(f[i] & 1){
                return "NO";
            }
        }
        return "YES";
    }
}
