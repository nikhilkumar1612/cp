#include <bits/stdc++.h>

using namespace std;

// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders) {
    vector<vector<int>> ans(orders.size(),vector<int>(orders[0].size(),0));
    vector<int> temp;
    int small,i,j,sum=0,index,del;
    for(i=0;i<orders.size();i++){
        for(j=0;j<orders[i].size();j++){
            sum+=orders[i][j];
        }
        ans[i][0] = sum;
        ans[i][1] = i;
        sum=0;
    }
    while(ans.size()){
        small = ans[0][0];
        index=ans[0][1];
        del=0;
        for(i=1;i<ans.size();i++){
            if(small>ans[i][0]){
                small=ans[i][0];
                index=ans[i][1];
                del=i;
            }
        }
        temp.push_back(index+1);
        ans.erase(ans.begin() + del);
    }
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
