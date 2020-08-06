#include<bits/stdc++.h>

using namespace std;

int solve(map<int, int> mp){
    int res = 0;

    for(int i=2;i<=100;i++){
        int total = 0;
        for(auto j: mp){
            int other = i - j.first;
            if(other>=1  && mp.count(other))
                total += min(j.second, mp[other]);
        }

        res = max(res, total/2);
    }

    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, t;
        cin>>n;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>t;
            mp[t]++;
        }
        cout<<solve(mp)<<endl;
    }

    return 0;
}