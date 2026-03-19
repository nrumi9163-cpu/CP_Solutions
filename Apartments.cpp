#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long>p, vector<long long>a, long long k){
    sort(p.begin(), p.end());
    sort(a.begin(), a.end());
    long long i = 0, j = 0, res = 0;
    while(i < p.size() && j < a.size()){
          if (abs(p[i] - a[j]) <= k){
            res++;
            i++;
            j++;
          }
          else if(a[j] < abs(p[i]-k)){
            j++;
          }else{
            i++;
          }
    }
    return res;
}

int main(){
    long long n, m, k;
    cin>>n>>m>>k;
    vector<long long>p(n);
    vector<long long>a(m);
    for(long long i = 0; i<n; i++){
        cin>>p[i];
    }
    for(long long i = 0; i<m; i++){
        cin>>a[i];
    }
    cout<<solve(p, a, k);
}