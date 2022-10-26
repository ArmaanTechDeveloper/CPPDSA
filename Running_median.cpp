#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,N,i; cin>>N;
    double ans=0;
    vector<ll>V(N);
    for(i=0;i<N;i++) cin>>V[i];
    priority_queue<ll>MAX;
    priority_queue<ll,vector<ll>,greater<ll>>MIN;

    for(i=0;i<N;i++){
        n=V[i];
        if(MAX.size()==MIN.size()){
            if(n<ans){MAX.push(n); ans=MAX.top();}
            else {MIN.push(n); ans=MIN.top();}
        }
        else if(MAX.size() > MIN.size()){
            if(n< ans){MIN.push(MAX.top()); MAX.pop(); MAX.push(n);}
            else MIN.push(n);
            ans=(MAX.top() + MIN.top() )/2;
        }
        else{
            if(n< ans)MAX.push(n);
            else {MAX.push(MIN.top()); MIN.pop(); MIN.push(n);}
            ans=(MAX.top() + MIN.top() )/2;
        }
        cout<<ans<<" ";
    }
    cout<<"\n";

    return 0;
}