#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long current_sum=0;
    long long max_sum=LONG_LONG_MIN;
    for(int i=0;i<n;i++){
        current_sum+=a[i];
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<max_sum<<endl;

    return 0;

}