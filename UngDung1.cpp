#include<iostream>
using namespace std;
int Tong(int n){
	int S=0;
	for(int i=1;i<=n;i++){
		S=S+i;
	}
	return S;
}
int giaiThua(int n){
	int g=1;
	for(int i=1;i<=n;i++){
		g=g*i;
	}
	return g;
}
int main(){
	int n;
	float kq=0.0;
	cout<<"Nhap n:";cin>>n;
	for(int i=1;i<=n;i++){
		kq=kq+(Tong(i)/giaiThua(i));
	}
	cout<<"Ket qua:"<<kq;
}
