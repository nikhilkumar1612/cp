//The idea is to sort the given list of numbers
//Then loop through the array only once to check only if the difference of adjacent elements is minimum.
vector<int> closestNumbers(vector<int> arr) {
    vector<int> ans;
    int min = INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        if((arr[i+1]-arr[i])<=min){
            if(arr[i+1]-arr[i]<min){
                min = arr[i+1]-arr[i];
                ans.clear();
            }
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]);
        }
    }
    return ans;
}
