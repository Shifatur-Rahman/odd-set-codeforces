#include <iostream>
using namespace std;
int main(){

int t, n, i, nn, c1, c2, sum;
cin>>t;

while(t--){
	cin>>n;
	nn = 2*n;
	int arr[nn];
c1=0;
c2=0;
	for(i=0; i<nn; i++){
		cin>>arr[i];
		if(arr[i]%2==0){
    c1++;
		} else{
	c2++;
		}
	}
	if(c1==c2){
		cout<<"Yes"<<endl;
	} else{
	    cout<<"No"<<endl;
	}
}



}
