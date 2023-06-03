#include <bits/stdc++.h>
using namespace std;
#define int long long;
//tpyedef long long int;
//const long long int N=1e8+10;
long long int arr[N];

int32_t main() {
    arr[1]=1;
    int N;
    for( int i=2; i<=N; i++){
        if(i%2==0){
            arr[i]=arr[i-1]^i;
        }
        else{
            arr[i]=arr[i-1]&i;
        }
    }
	long long int t;
	cin>>t;
	
	while(t--){
	    long long int n;
	    cin>>n;
	    cout<<arr[n]<<endl;
	}
	return 0;
}