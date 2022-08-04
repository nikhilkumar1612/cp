//the idea is to sort the given array and check for each subbarray in the pairs of k and compute the min.
#include <bits/stdc++.h>
#include <climits>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    int n=arr.size(),i;
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
    for(i=0;i<=n-k;i++){
        if(arr[i+k-1]-arr[i]<min){
            min=arr[i+k-1]-arr[i];
        }
    }
    return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
