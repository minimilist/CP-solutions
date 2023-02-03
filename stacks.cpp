#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int help(vector<int> arr, int d){
    stack<pair<int,int> > s1;
    stack<pair<int,int> > s2;
    stack<pair<int,int> > answer;
    int size = (int)arr.size();
    int m = 0;
    for (int i=0; i<size; ++i){
        if (i<d){
            m = s1.empty() ? arr[i] : max(arr[i], s1.top().second);
            s1.push(make_pair(arr[i],m));
        }
        else{
            int y = s2.empty() ? s1.top().second : max(s1.top().second, s2.top().second);
            m = answer.empty() ? s1.top().second : min(y, answer.top().second);
            answer.push(make_pair(s1.top().second, m));
            if (s2.empty()){
                while (!s1.empty()){
                    int m = s2.empty() ? s1.top().first : max(s1.top().first, s2.top().second);
                    s2.push(make_pair(s1.top().first, m));
                    s1.pop();
                }
            }
            if (!s2.empty()) s2.pop();
            m = s1.empty() ? arr[i] : max(arr[i], s1.top().second);
            s1.push(make_pair(arr[i],m));
        }
    }
    int y = s2.empty() ? s1.top().second : max(s1.top().second, s2.top().second);
    int minimum = answer.empty() ? s1.top().second : min(y, answer.top().second);
    answer.push(make_pair(s1.top().second, minimum));
    return answer.top().second;
}

vector<int> solve(vector<int> arr, vector<int> queries) {
    vector<int> a;
    for(auto x: queries){
        a.push_back(help(arr, x));
    }
    return a;
}

int main(){
    vector<int> a, q;
    int n, d, t;
    cin >> n >> d;
    while(n--){
        cin >> t;
        a.push_back(t);
    }
    while(d--){
        cin >> t;
        q.push_back(t);
    }
    vector<int> ans = solve(a, q);
    for (auto x: ans){
        cout << x << " ";
    }
}