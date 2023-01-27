#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[], int &n){
	for(int i=0; i<n;i++){
		cout<<"Nhap vao a[" << i<< "] = ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n;i++){
		cout << a[i] << "  ";
	}}
//ham kiem tra so nguyen to
//neu x la so nguyen to thi tra ve true, nguoc lai false
bool KiemtraSonguyento(int x){
	if(x<2) return false;
	else {
		for(int i=2; i<x; i++){
			if(x%i == 0) return false;
		}
	} return false;
}
bool Kiemtramang(int a[], int n){
	bool Kiem_Tra = false; //gia su mang ko ton tai snt
	for(int i=0; i<n;i++) {
		if(KiemtraSonguyento(a[i])==true){
			Kiem_Tra = true; //cap nhat lai 
			break; //dung viec kiem tra
		}
	} return Kiem_Tra;
}
//ham tim gia tri chan dau tien
//void Timgiatrichandautien(int a[], int n){
//	for(int i=0;i<n; i++){
//		if(a[i]%2==0){
//			cout << a[i];
//			break; //neu tim kiem thay ptu chan thi ko can tim nua
//		}
//	}
//}
int main(){
	int a[100],n;
		do{
		cout<< "Nhap vao so phan tu cua mang: ";
		cin>>n;
		if(n<0 || n > 100){cout << "So phan tu ko hop le. ";
		}
	} while(n<0 || n > 100);
	NhapMang(a,n);
	XuatMang(a,n);
	if(Kiemtramang(a,n)==true){
		cout << "\nMang ko ton tai so nguyen to";
	}else {
	cout <<"\nMang co ton tai snt";}
//	cout << "\n"<< KiemtraSonguyento(8);
//	cout<< "\nGia tri chan dau tien: ";
//	Timgiatrichandautien(a,n);
return 0;
}

