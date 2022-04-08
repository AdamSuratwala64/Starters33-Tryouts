#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test = 0;
	cin>>test;
	while(test--){
	    int cab1 = 0, cab2 = 0;
	    cin>>cab1>>cab2;
	    if(cab1 < cab2){
	        cout<<"FIRST"<<endl;
	    }
	    else if(cab1 == cab2){
	        cout<<"ANY"<<endl;
	    }
	    else{
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
