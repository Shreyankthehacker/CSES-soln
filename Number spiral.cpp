#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
        if(max(x,y)%2!=0){
        	if(x<y)cout<<y*y-x+1;
        	else cout<<x*x-2*x+y+1;
		}
		else{
			if(x<y) cout<<y*(y-2)+x+1;
			else cout<<x*x-y+1;
		}
		cout<<endl;
	}
}

