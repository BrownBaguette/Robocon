#include <bits/stdc++.h>
using namespace std;

void solve(){
    // solves the logic. Implementation nuances are there due to leetcode driver code.
    string moves;
    cin >> moves;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<moves.length();i++){
        if(moves[i]=='L'){
            sum1++;
        }
        else if(moves[i]=='R'){
            sum1--;
        }
        else if(moves[i]=='U'){
            sum2++;
        }
        else{
            sum2--;
        }
    }

    if(sum1==0 && sum2==0){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}