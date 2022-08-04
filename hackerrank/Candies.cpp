//only the worst case isnt passing.


#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<int> temp(arr.size(),1);
    int i,j;
    long ans;
    for(i=0;i<arr.size()-1;i++){

        if(arr[i]<arr[i+1]){
            if(temp[i+1]>temp[i]){
                continue;
            }
            temp[i+1]=temp[i]+1;
        }

        else if(arr[i]>arr[i+1]){
            if(temp[i+1]<temp[i]){
                continue;
            }
            temp[i]=temp[i+1]+1;
            j=i-1;
            while(j>=0 && arr[j]>arr[j+1] && temp[j]<=temp[j+1]){
                temp[j]=temp[j+1]+1;
                j--;
            }
        }

        else{
            continue;
        }
    }
    ans=0;
    for(i=0;i<temp.size();i++){
        //cout<<temp[i];
        ans+=temp[i];
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
