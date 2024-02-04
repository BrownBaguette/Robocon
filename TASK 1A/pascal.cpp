// For the logic refer to the "solve" function
// for the leetcode implementation refer to the "generate" function
#include <bits/stdc++.h>
using namespace std;

void solve(){
  // logic for the pascal triangle qn. Prints it out. Not the leetcode implementation. the leetcode implementation can be found below
  int p;
  cin >> p;

  for(int j=1;j<=p;j++){
    int n=j-1;
    if(n==0){
      cout << 1 <<'\n';
    }

    else{
      int ans = 1;

      for(int i = 0; i < n; i++){
        cout << ans << " " ;
        ans = ans * (n-i) / (1+i);
      }

      cout << ans << '\n';
    }
  }

}

// This is the leetcode implementation with the vector function.

vector<vector<int>> generate(int numRows) {
       vector<vector<int>> result;
       for (int j = 1; j <= numRows; j++) {
        int n = j - 1;
        vector<int> row;

        if (n == 0) {
            row.push_back(1);
        } 
        else {
            int ans = 1;
            for (int i = 0; i < n; i++) {
                row.push_back(ans);
                ans = ans * (n - i) / (1 + i);
            }
            row.push_back(ans);
        }

        result.push_back(row);
        }

    return result; 
}

int main(){
  // I just use it to solve multiple testcases
  int t;
  cin >> t;
  while(t--){
    solve();
  }

  return 0;
}

