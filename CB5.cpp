#include<iostream>
using namespace std;
int SoLuong(int n){
	int i=0;
	while (n>0){
		i++;
		n=n/10;
	}
	return i;
}
int Tong(int n){
	int S=0;
	while(n>0){
		S=S+(n%10);
		n=n/10;
	}
	return S;
}
int main(){
	int n;
	cout<<"Nhap so :";cin>>n;
	cout<<"So luong cac chu so cua "<<n<<" :"<<SoLuong(n)<<endl;
	cout<<"Tong cac chu so cua "<<n<<" :"<<Tong(n);
}
