int saveThePrisoner(int n, int m, int s) {
    int ans;
    ans = ((m%n) + s - 1);
    if(ans == 0){
        ans = n;
    }
    if(ans != n){
        ans = ans%n;
    }
    return ans;
}
