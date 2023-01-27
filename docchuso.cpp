
#include<conio.h>
#include<iostream>
using namespace std;
void DocChuSo(int ChuSo){
	if(ChuSo==0) 	cout<< " Khong ";
	else if(ChuSo==1) cout << " Mot ";
	else if(ChuSo==2) cout << " Hai ";
	else if(ChuSo==3) cout <<" Ba ";
	else if(ChuSo==4) cout <<" Bon ";
	else if(ChuSo==5) cout <<" Nam ";
	else if(ChuSo==6) cout <<" Sau ";
	else if(ChuSo==7) cout <<" Bay ";
	else if(ChuSo==8) cout <<" Tam ";
	else if(ChuSo==9) cout <<" Chin ";}
int DemSoLuong(int n){
	int dem=0;
	while(n!=0){
		n= n/10;
		dem++;
	} return dem;
}
void DocSo(int n){
	//12345 => dao lai la 54321
	int SoDao = 0;
	while(n!=0){
		SoDao=SoDao *10 +n%10;
		n=n/10;
	}
	int SoLuong = DemSoLuong(SoDao);
	while(SoDao!=0){
		DocChuSo(SoDao%10);
			if(SoLuong==7){
			cout<<"Trieu";
		}
			if(SoLuong==6){
			cout<<"Tram Ngan";
		}
			if(SoLuong==5){
			cout<<"Muoi Ngan";
		}
		if(SoLuong==4){
			cout<<"Ngan";
		}
		if(SoLuong==3){
			cout<<"Tram";
		}
		if(SoLuong==2){
			cout<<"Muoi";
		}
		SoLuong--;
		SoDao /=10;}}
int main()
{
	int n = 12;
	DocSo(n);
	getch();
	return 0;
}

