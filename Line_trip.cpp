#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k;

vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int dist=0;
for(int i=0;i<n;i++){
    dist=a[i+1]-a[i];
}
int diff=2*(a[n-1]-k);

dist=max(dist,diff);

cout<<dist<<endl;


    return 0;
}
}