#include<iostream>
using namespace std;
int main(){
	int n,kq=0;
	cout<<"Nhap mot so:";cin>>n;
	while(n>0){
		kq=kq*10+(n%10);
		n=n/10;
	}
	cout<<"chu so dao nguoc:"<<kq;
}
