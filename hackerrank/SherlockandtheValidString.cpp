//idea is to create a reference array which contains the no. of instances of all the characters in the string.
//use the array to check if the given string is valid.

#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int flag=0,i,a;
    vector<int> count;
    for(i=0;i<26;i++){
        count.push_back(0);
    }
    for(i=0;i<s.size();i++){
        a = s[i]-97;
        count[a]++;
    }

    for(i=0;i<count.size();i++){
        if(count[i]==0){
            count.erase(count.begin()+i);
            i--;
        }
    }
    i=0;
    while(i<count.size()-1 && flag<2){
        if(count[i]!=count[i+1]){
            count.erase(count.begin()+(i+1));
            flag++;
            i--;
        }
        i++;
    }

    if(flag==2){
        return "NO";
    }
    else{
        return "YES";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
