#include<iostream>
using namespace std;
int main(){
	string  HoTen;
	float toan,ly,hoa,tb;
	do{
	cout<<"Nhap ten:";cin>>HoTen;
	cout<<"Nhap diem toan,ly hoa:";cin>>toan>>ly>>hoa;
	tb=(toan+ly+hoa)/3;
	if(toan>10||ly>10||hoa>10||toan<0||ly<0||hoa<0){
		cout<<"diem khong hop le!"<<endl;
	}
	}while(toan>10||ly>10||hoa>10||toan<0||ly<0||hoa<0);
	cout<<"Diem trung binh:"<<tb<<endl;
	if(tb>=9.0){
		cout<<"Hoc luc xuat sac";
	}
	else if((tb<9.0)&&(tb>=8.0)){
		cout<<"Hoc luc gioi";
	}
	else if((tb<8.0)&&(tb>=6.5)){
		cout<<"Hoc luc kha";
	}
	else if((tb<6.5)&&(tb>=5.0)){
		cout<<"Hoc luc trung binh";
	}
	else if((tb<5.0)&&(tb>=3.0)){
		cout<<"Hoc luc yeu";
	}
	else{
		cout<<"Hoc luc kem";
	}
}
