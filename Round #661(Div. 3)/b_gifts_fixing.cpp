#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll solve(ll arr1[], ll arr2[], int n){
        


    ll min1 = *min_element(arr1, arr1+n);
    ll min2 = *min_element(arr2, arr2+n);

    ll res = 0;
    int i=0;

    while(i<n){
        if(arr1[i]>min1 && arr2[i]>min2){
            int r = min(arr1[i]-min1, arr2[i]-min2);
            res += r;
            arr1[i] -= r;
            arr2[i] -= r;
        }

        if(arr1[i]>min1)
            res += arr1[i]-min1;

        if(arr2[i]>min2)
            res += arr2[i]-min2;
        i++;
    }

    return res;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr1[n], arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        cout<<solve(arr1, arr2, n)<<endl;
    }
}

