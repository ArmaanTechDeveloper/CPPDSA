//program to find an element which is greater than elements on itsa left and right

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
    int pref[n];
    int suff[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,A[i]);
        pref[i]=mx;
    }
      int mn=INT_MAX;
    for(int i=n-1;i>=0;i--){
        mn=min(mn,A[i]);
        suff[i]=mn;
    }
    int flag=0;
    int idx=-1;
    for(int i=1;i<n-1;i++){
        if(A[i]>pref[i-1] && A[i]<suff[i+1]){
            flag++;
            idx=i+1;
        }
    }
    if(flag==0){
        cout<<"There is no peak element in the array"<<endl;
    }
    else{
        cout<<"There exist a peak of this array at index: "<<idx<<endl;
    }
return 0;
}