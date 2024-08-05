#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<float> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    float sum = accumulate(v.begin(),v.end(),0);
    cout<<(sum*1.0/n)<<endl;
}
