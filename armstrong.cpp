#include<iostream>
using namespace std;
int main(){
	int rv,r,n;
	cout<<"num to be reversed: \n";
	cin>>n;
	while(n!=0){
		r=n%10;
		rv=rv*10+r;
		n=n/10;
	}
	cout<<"reversed num:  \n"<<rv;
     
	return 0;
	
}
