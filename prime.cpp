//program to find all prime numbers upto integer A

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t  main(){

cout<<"Enter the number upto which prime numbers are needed"<<endl;
int A;
cin>>A;

 vector<int> v;
     vector<bool> isPrime(A+1,1);
    isPrime[1]=0;
isPrime[0]=0;
for(int i=2;i*i<=A;i++){
	if(isPrime[i]==1){
		for(int j=i*i;j<=A;j+=i){
			isPrime[j]=0;
		}
	}
}
for(int i=0;i<=A;i++){
    if(isPrime[i]){
        v.push_back(i);
    }
}
cout<<"The prime numbers from 1 to n are:"<<endl;
for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

return 0;
}