#include <iostream>
using namespace std;
#define ll long long
#define mem memset
#define ca cout<<1<<endl
#define cb cout<<0<<endl
#define ldb long double

void solve(){
    string s;
    ll n;
    cin>>n>>s;
    
    ll a =0;
    ll b = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='1'){
            a++;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(s[i]=='1' && s[i+1]=='1'){
            b++;
        }
    }
    if(b!=0 && a!=0){
        cout<<2<<endl;
    }
    else if(b==0 && a!=0){
        cout<<1<<endl;
    }
    else if(a==0){
        cout<<0<<endl;
    }
}


int main() {
	// your code goes here
	long long t = 0;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
