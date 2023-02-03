#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int main(){
    int t =0;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n, m, d, x, d1, d2, b = 0, mi, ms;
        cin >> n >> m >> d;
        map<int, int> pos;
        vector<int> per, seq;
        stack<pair<int,int> > st;
        for (int i=0; i<n; ++i){
            cin >> x;
            per.push_back(x);
            pos[x] = i+1;
        }
        for (int j=0; j<m; ++j){
            cin >> x;
            seq.push_back(x);
        }
        for (int j=0; j<m-1; ++j){
            d1 = pos[seq[j+1]] - pos[seq[j]];
            d2 = d - d1 + 1;
            if (d1 < 0 || d2 <= 0){
                b = 1;
                break;
            }
            if (n - pos[seq[j+1]] + pos[seq[j]] - 1 >= d2) mi = min(d1, d2);
            else mi = d1;
            ms = st.empty() ? mi : min(mi, st.top().second);
            st.push(make_pair(j, ms));
        }
        if (b == 1){
            ans.push_back(0);
        }
        else{
            ans.push_back(st.top().second);
        }
    }
    for (auto c: ans){
        cout << c << endl;
    }
}