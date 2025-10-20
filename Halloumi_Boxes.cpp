#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,k;
bool sorted=true;
cin>>n>>k;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

for(int j=1;j<n;j++){
    if(a[j]<a[j-1]){
        sorted=false;
        break;
    }
}
if(k>1 || sorted)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
    return 0;
}