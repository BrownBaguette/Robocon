#include <bits/stdc++.h>
using namespace std;

void solve(){
    // main logic for the lc qn.
    string uin;
    cin >> uin;

    stack <char> f_ans;
    for(int i=0;i<uin.length();i++){
        if(f_ans.empty()){
            f_ans.push(uin[i]);
        }
        else if((f_ans.top() == '('&& uin[i] == ')') || (f_ans.top() == '['&& uin[i] == ']') || (f_ans.top() == '{'&& uin[i] == '}')){
            f_ans.pop();
        }
        else{
            f_ans.push(uin[i]);
        }
    }

    //print statements for my reference 
    if(f_ans.empty()){
        cout << "YEA" << '\n';
    }
    else{
        cout << "Nah" << '\n';
    }
}

int main(){
    // I just use this to handle all the testcases
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}