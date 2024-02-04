// first go to main , then follow through the code and comments
#include <bits/stdc++.h>
using namespace std;

void solve(){
    // solves the logic. Implementation nuances are there due to leetcode driver code.
    int area;
    cin >> area;
    int p = sqrt(area);
    int L , W;
    
    int k = 0;
    while (k <= p && area % (p - k) != 0) {
        k++;
    }
    
    cout << (area / (p - k)) << " ";
    cout << ((p - k)) << '\n';
}

//if you need this is the leetcode implementation given below

vector<int> constructRectangle(int area) {
    vector<int> result;
    int p = sqrt(area);
    int L , W;
    
    int k = 0;
    while (k <= p && area % (p - k) != 0) {
        k++;
    }
    
    result.push_back(area / (p - k));
    result.push_back((p - k));
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}