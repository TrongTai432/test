#include<iostream>
#define MAX 100
using namespace std;
void HoanVi(int &, int &);
void NhapMang(int a[], int &n){
	do{
		cout<< "Nhap vao so phan tu cua mang: ";
		cin>>n;
		if(n<0 || n > MAX){cout << "So phan tu ko hop le. ";
		}
	} while(n<0 || n > MAX);
	for(int i=0; i<n;i++){
		cout<<"Nhap vao a[" << i<< "] = ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n;i++){
		cout << a[i] << "  ";
	}
}
bool TimKiem(int a[], int n, int x) //x la phan tu can tim kiem
{ for(int i=0; i<n;i++){
	if(a[i]==x) {return true;} //tim thay x trong mang
} return false; //ko ton tai x trong mang

}
//kiem tra mang co toan so duong hay ko
bool KiemTrac1(int a[], int n){
	int dem =0;
	for(int i=0; i<n;i++){ if (a[i]>=0) {
		dem++; 
	} if(dem==n) return true;
	} return false;
}
bool KiemTrac2(int a[], int n){
	for(int i=0; i<n;i++){ 
	if (a[i]<0) {
		return false;
	}  return true;
}}
//tach mang
void TachMang(int a[], int n, int Temp[], int &nTemp){
	nTemp=0;
	//duyet mang a de tim ra cac so am luu vao temp
	for(int i=0;i<n;i++){
		if(a[i]<0 ) {
			Temp[nTemp++] = a[i]; // sau khi nhan vao a[i] thi tang nTemp len
		}
	}
}
int TimMin(int a[], int n){
	int min= a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min) { min= a[i];
		}
	} return min;
}
int TimMax(int a[], int n){
	int max= a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max) { max= a[i];
		}
	} return max;
}
// ham hoan vi
void HoanVi(int &x, int &y){
	int Temp=x;
	x=y;
	y=Temp;
}
void SapXepTangDan(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<n;j++){
			if(a[i]>a[j]){
				HoanVi(a[i],a[j]);
			}
			}
		}
	}
void SapXepGiamDan(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<n;j++){
			if(a[i]<a[j]){
				HoanVi(a[i],a[j]);
			}
			}
		}
	}
void ThemPhanTu(int a[], int &n, int ViTriThem, int PhanTuThem){
	for(int i=n; i>=ViTriThem+1; i--){
		a[i]= a[i-1];
	} n++;
	a[ViTriThem]= PhanTuThem;
}
int main(){
	int a[MAX];
	int n;
	NhapMang(a,n);
	XuatMang(a,n);
	int x;
	cout<<"\n Nhap vao phan tu can tim kiem";
	cin>>x;
	bool check = TimKiem(a,n,x);
	if(check==true){
		cout<<"\nPhan tu " << x << " ton tai trong mang";
	} else cout<<"\nPhan tu " << x << " khong ton tai trong mang";
	bool kiemtratoanduong = KiemTrac2(a,n);
	if(kiemtratoanduong == true ) {
		cout<< "\nMang toan so duong";
	} else cout << "\nMang ko toan so duong";
	int Temp[MAX], nTemp;
	TachMang(a,n,Temp, nTemp);
	cout<<"\nMang temp ";
	XuatMang(Temp, nTemp); 
	int min = TimMin(a,n);
	int max = TimMax(a,n);
	cout <<"\nMin= " << min;
	cout << "\nMax= " << max;
//	cout<< "\n\n\t\t Sap xep tang dan";
//	SapXepTangDan(a,n);
//	XuatMang(a,n);
//	
//	cout<<"\n\n\t\t Sap xep giam dan";
//	SapXepGiamDan(a,n);
//	XuatMang(a,n);
	int ViTriThem, PhanTuThem;
	do{
		cout<< "\nNhap vao vi tri them: ";
		cin>>ViTriThem;
		
		if(ViTriThem < 0 || ViTriThem > n){
			cout<<"Vi tri them ko hop le";
			
		}
	} while(ViTriThem < 0 || ViTriThem > n);
	cout<<"\nNhap vao phan tu them: ";
	cin>>PhanTuThem;
	ThemPhanTu(a,n,ViTriThem,PhanTuThem);
	cout<<"\nMang a sau khi them " << PhanTuThem << " vao vi tri " << ViTriThem << " la: ";
	XuatMang(a,n);
}
