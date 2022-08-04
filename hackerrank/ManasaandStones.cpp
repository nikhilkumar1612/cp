//the idea is to only find the final value after adding the 2 values(a,b) in all possible ways and push it into the vector.
//it is necesssary to know the min(a,b)as the returned vector must be sorted.
//also it is necessary to check if the 2 values provided are equal to ensure that duplicates are not returned in the list.


#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {
    vector<int> c;
    int i,temp;
    if(a==b){
        c.push_back((n-1)*a);
        return c;
    }
    else if(b<a){
        temp = b;
        b = a;
        a = temp;
    }
    for(i=n-1;i>=0;i--){
        temp = (i*a) + (n-(i+1))*b;
        c.push_back(temp);
    }
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
