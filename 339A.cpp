#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	for(int i=0 ; i<s.length(); i++){
		if(s[i] == 1) cout<<1<<"+";
	}
	for(int i=0; i<s.length(); i++){
		if(s[i]== 2) cout<<2<<"+";
	}
	for(int i = 0; i<s.length(); i++){
		if(s[i] == 3) cout<<"+"<<3;
	}
	return 0;
}