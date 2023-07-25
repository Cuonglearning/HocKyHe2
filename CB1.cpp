#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so can kiem tra:";cin>>n;
		if((n/10)*(n%10)==2*((n/10)+(n%10)))
			cout<<"thoa man dieu kien";
		cout<<"khong thoa man dieu kien";
}
