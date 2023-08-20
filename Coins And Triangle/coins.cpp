#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	      int tri = 0;
	          for(int i=1; i<=n; i++){
	          if(n-i>=0){
	              tri++;
	          }
	           n -= i;
	          }
	          cout<<tri<<endl; 

	    t--;
	}
	return 0;
}
