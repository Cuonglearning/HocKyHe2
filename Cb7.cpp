#include<iostream>
using namespace std;
int main(){
	char loai;
	int SoNgay,tien;
	cout<<"Nhap loai phong:";cin>>loai;
	cout<<"Nhap so ngay:";cin>>SoNgay;
		if(int(loai)==65||int(loai)==97){
			tien=SoNgay*250;
			if(SoNgay>12)
				tien=(SoNgay*250)-(0.1*SoNgay*250);	
		}
		else if(int(loai)==66||int(loai)==98){
			tien=SoNgay*200;
			if(SoNgay>12)
				tien=(SoNgay*200)-(0.08*SoNgay*200);
		}
		else{
			tien=SoNgay*150;
			if(SoNgay>12)
				tien=(SoNgay*150)-(0.08*SoNgay*150);
		}
	cout<<"So tien can tra:"<<tien<<".000d";
}
