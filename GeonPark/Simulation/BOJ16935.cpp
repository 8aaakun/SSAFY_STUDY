#include <bits/stdc++.h>

using namespace std;

int n, m;

void print(vector<vector<int>> &vec){
    for(auto v : vec){
        for(auto e : v){
            cout << e << " ";
        }
        cout << endl;
    }
}

void one(vector<vector<int>> &vec){
    int h = vec.size();
    vector<vector<int>> temp;

    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        temp.push_back(*i);
    }
    vec = temp;
}

void two(vector<vector<int>> &vec){
    int h = vec.size();
    vector<vector<int>> temp;

    for (auto i = vec.rbegin(); i != vec.rend(); i++)
    {
        temp.push_back(*i);
    }
    vec = temp;
}

void three(vector<vector<int>> &vec){
    int w = vec.size();
    int h = vec[0].size();
    vector<vector<int>> temp(h, vector<int>(w));

    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << i << " " << j << endl;
            temp[i][j] = vec[w - j - 1][i];
        }
    }
    vec = temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r;
    int c;
    vector<vector<int>> vec;
    cin >> n >> m >> r;
    vec.resize(n, vector<int>(m));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> vec[i][j];
        }
    }
    
    while(r--){
        cin >> c;
        if(c == 1){
            one(vec);   
        }
        else if(c == 2){
            two(vec);
        }
        else if(c == 3){
            three(vec);
        }
    }

    print(vec);
}