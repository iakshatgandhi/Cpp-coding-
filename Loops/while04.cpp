#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a>b){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	}
	return 0;
}
