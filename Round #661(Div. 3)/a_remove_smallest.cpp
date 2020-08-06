#include<bits/stdc++.h>

using namespace std;

string solve(int arr[], int n){
    sort(arr, arr+n);

    for(int i=n-1;i>=1;i--){
        if(arr[i]-arr[i-1]>1)
            return "NO";
    }

    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cout<<solve(arr, n)<<endl;
    }
}

